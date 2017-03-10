using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;
using OxyPlot;

//This class is used to hold the waveform and mass data between various other classes
/*
 * <RgaMain>
 * From Date
 * To   Date
 *   <RGA1-6>
 *    <PV>
 *      <mystrip>    ==> Same class with different names:
 *      <myAnaWave>  ==> These all use DataPv class in a list. Strip data is a list of PVs scanned and ANA/BAR list is a list of Wavedata at different times
 *      <myBarWave>  ==>
 *    </PV>
 *   </RGA1-6>
 * </RgaMain>
 * 
 * <DataPV> This holds a plot of DataElements in a list. Each DataPV is a plot and each DataElement is a datum in that plot
 * <DataElement> This holds all the PVs info as time and PV name. 
 */
namespace RgaArchiver
{

    public class DataContainer
    {       //Hold one RGA
        public string URL_root;
        public DateTime start;
        public DateTime end;
        public List<DataPV> mystrip { get; set; }
        public List<DataPV> myAnaWave { get; set; }
        public List<DataPV> myBarWave { get; set; }

        public DataContainer()
            {
                this.mystrip   = new List<DataPV>();
                this.myAnaWave = new List<DataPV>();
                this.myBarWave = new List<DataPV>();
                this.start     = new DateTime();
                this.end       = new DateTime();
            }
 
    }


        public class DataPV
        {
            public DataPV()
            {
              this.data = new List<DataElement>();
            }
            //Use for URL build
            public string pv_url_suffix { get; set; }
            //Use for strip-plots id
            public string   pv          { get; set; }
            //User for ANA/BAR plots
            public DateTime time   { get; set; }
            //ANA/BAR/Stip data
            public List<DataElement> data { get; set; }

        }
        public class DataElement
        {
        public DataElement()
        {
            this.time = new DateTime();
        }
        public DateTime time  { get; set; }
            public double   mass  { get; set; }
            public double   pres  { get; set; }
            public int      head  { get; set; }
            public int      mode  { get; set; }
            public int      fil   { get; set; }
            public int      arch  { get; set; } 
        }

    
}