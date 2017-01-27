using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using Newtonsoft.Json;
using System.Windows;
using System.Windows.Input;
namespace RgaArchiver
{
    /// <summary>
    /// Set a PV and either return a range of PV over time or return a waveform and a reange of an element over time
    /// Waveforms are always returned at a point in time set with the From
    /// As there is a lot of data over untriggered time ranges, the values are averaged and zero values are dropped
    /// If an element of the waveform is set that will be returned with a range
    /// The rgaFrom and rgaTo date, default to December 2016, when we had data
    /// The other params will default as well.
    ///
    /// Use the DataContainer to hold data returned from this class
    /// </summary>

    public class RgaArchiveAccess
    {
        ///  <value>From date yyyy,mm,dd,hh,mm,ss</value>
        public DateTime rgaFrom { get; set; } = dateRgaFrom;

        ///  <value>To date yyyy,mm,dd,hh,mm,ss</value>
        public DateTime rgaTo { get; set; }   = dateRgaTo;

        ///  <value>Number of bins over range (100). The average value is taken</value>
        public int bins { get; set; } = 5;

        ///  <value>Archiver appliance URL</value>
        public String rgaURL { get; set; } = "http://claraserv2:17668/retrieval/data/getData.json?";

        ///  <value>Pv root (CLA-GUN-VAC-RGA-0)</value>
        public String pvRoot { get; set; } = "rga6";

        ///  <value>Pv (BAR)</value>
        public String pv { get; set; } = "ARCANA";

        ///  <value>Mass range from a waveform (Mass 1)</value>
        public int mass { get; set; } = 1;

        private int rawDataPoints { get; set; }
        private int rawArrayPoints { get; set; }
        private static DateTime dateRgaFrom = new DateTime(2017, 01, 13, 09, 10, 10);
        private static DateTime dateRgaTo = new DateTime(2017, 01, 13, 17, 27, 10);


        ///  <value>Get values from the archive</value>
        public void GetArchive() 
        {
            //Take a waveform from the archiver then load data and info related to it         
            //Reset date records

            int datapoints = rawDataPoints;
            for (int i = 0; i < this.bins; i++)

            {
                //Use steps calculate the step size
                GetData(i);
            }
        }



        //Helper functions

        /// <summary>
        /// Get the data from the archive range
        /// </summary>

        private int GetData(int step)
        {
            //Find date step
            DateTime start = rgaFrom.AddSeconds(GetSteps() * step);
            DateTime end= rgaFrom.AddSeconds(GetSteps()    * step);
            dynamic value_time;
            dynamic data= GetURL(start, end);
            try
            {
                rawDataPoints = data[0]["data"].Count;
                rawArrayPoints = data[0]["data"][0]["val"].Count;
                value_time = data[0]["data"][0].SelectToken("secs");
            }

            catch (Exception e)
            {
                Console.WriteLine("{0} Exception caught.", e);
                return 1;
            }

            //Check time limits are with +/- 1h mins of return value. This is the upper limit on ANA scans
            var epoch = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
            epoch = epoch.AddSeconds(Convert.ToDouble(value_time.ToString()));
            if (DateTime.Compare(epoch, start.AddMinutes(-60)) < 0 ||  DateTime.Compare(epoch, end.AddMinutes(60)) > 0){Console.Error.WriteLine("Date lookup between "+start.AddMinutes(-60)+" and " +end.AddMinutes(60) + " is out of range of archive time return date: "+ epoch); return 1; }
            //Console.WriteLine("Secs:" + value_time.ToString());
            //Console.WriteLine("Secs:" + value_time.ToString());
            //Console.WriteLine("Data points:"+ data[0]["data"].Count);
            //Console.WriteLine("Mass points:"+ data[0]["data"][0]["val"].Count);
            float value_mass = (float)data[0]["data"][0].SelectToken("val[" + mass + "]");
            //Console.WriteLine("Mass " + mass + ": " + value_mass.ToString());
            return 0;
        }

        private dynamic GetURL(DateTime tempFrom, DateTime tempTo)
        {
            var from = tempFrom.ToString("yyyy-MM-ddTHH\\:mm\\:ss.fffffffzzz");
            var to = tempTo.ToString("yyyy-MM-ddTHH\\:mm\\:ss.fffffffzzz");

            // Build a List of the querystring parameters (this could optionally also have a .ToLookup(qs => qs.key, qs => qs.value) call)
            var querystringParams = new[] {
                 new { key = "pv", value = this.pvRoot + ":" + this.pv},
                 new { key = "from", value = from },
                 new { key = "to", value = to }
                };

            // format each querystring parameter, and ensure its value is encoded
            var encodedQueryStringParams = querystringParams.Select(p => string.Format("{0}={1}", p.key, WebUtility.UrlEncode(p.value)));

            // Construct a strongly-typed Uri, with the querystring parameters appended
            var url = new UriBuilder(this.rgaURL);
            url.Query = string.Join("&", encodedQueryStringParams);
            Console.WriteLine(this.rgaURL + string.Join("&", encodedQueryStringParams));
            String json;
            try
            {
                WebClient n = new WebClient();
                json = n.DownloadString(url.ToString());
            }

            catch (Exception e)
            {
                Console.WriteLine("{0} Exception caught.", e);
                return 1;
            }


            string valueOriginal = Convert.ToString(json);
            return JsonConvert.DeserializeObject(valueOriginal);
        }
        private int GetSteps()
        {
            //Find the time range and divide into points for chart
            var totSecs = (rgaTo - rgaFrom).TotalSeconds;
            if (totSecs < bins) { totSecs = 0; }//Avoid subsecond bins
            return (int)totSecs / this.bins;
        }
    }
}
