using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;
using OxyPlot;

//This class is used to hold the waveform and mass data between various other classes

namespace RgaArchiver
{

    public class AddFactory<T,R>
           where T : Dictionary<string, R>
           where R : new()
    {
        public int AddElement(string Name, T myobject)

        {
            try
            {
                myobject.Add(Name, new R());
            }
            catch (Exception e)
            {
                Console.WriteLine("{0} exception.", e);
                return 1;
            }
            return 0;
        }
    }

    public class DataContainer:AddFactory<Dictionary<string, RgaElement>, RgaElement>
    {
        public DateTime from { get; set; }
        public DateTime to { get; set; }
        public Dictionary<string, RgaElement> rgas = new Dictionary<string, RgaElement>();

    
        //Add an RGA to the Datacontainer
        public int AddRga(string Name)
        {

           return AddElement(Name, this.rgas);
        }

        //Get an rga from the Datacontainer
        public RgaElement GetRga(string Name)
        {
            if (!(this.rgas.ContainsKey(Name))){ Console.WriteLine("Key not found: "+ Name); return new RgaElement(); }
            return this.rgas[Name];
        }


    }

    public class RgaElement:AddFactory<Dictionary<string, PvElement>, PvElement>
    {
        public Dictionary<string, PvElement> pvs = new Dictionary<string, PvElement>();

        //Add an PV to the rga
        public int AddPv(string Name)
        {
            return AddElement(Name, this.pvs);
        }

        //Get an pv from the rga
        public PvElement GetPv(string Name)
        {
            if (!(this.pvs.ContainsKey(Name))) { Console.WriteLine("Key not found: " + Name); return new PvElement(); }
            return this.pvs[Name];
        }

    }

    public class PvElement
    {
        //mass of particle vs <value vs time>
        public Dictionary<int, MassRangeElement> masses = new Dictionary<int, MassRangeElement>();
        //time of waveform scan vs <value vs mass>
        public Dictionary<DateTime, WaveformElement> waveforms = new Dictionary<DateTime, WaveformElement>();

        //Get an waveform object at given time from the pv
        public WaveformElement GetWaveform(DateTime time)
        {
            if (!(this.waveforms.ContainsKey(time))) { Console.WriteLine("Key not found: " + time); return new WaveformElement(); }
            return this.waveforms[time];
        }

        //Get an mass object at given mass from the pv
        public MassRangeElement GetMasse(int mass)
        {
            if (!(this.masses.ContainsKey(mass))) { Console.WriteLine("Key not found: " + mass); return new MassRangeElement(); }
            return this.masses[mass];
        }

    }

    public class WaveformElement

    {
        //Waveform type BAR, ANA
        public string type;
        //Value of waveform recorded time
        public DateTime waveformTime { get; set; }
        //Value of waveform vs. mass
        public Dictionary<float, float> waveform = new Dictionary<float, float>();
    }

    public class MassRangeElement

    {
        //Waveform type BAR, ANA
        public string type;
        //Value of mass vs. time
        public Dictionary<float, DateTime> mass = new Dictionary<float, DateTime>();
    }


}
