using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using RgaArchiver;
namespace RgaArchiverTests
{
    [TestClass]
    public class RgaArchiverTests
    {
        [TestMethod]
        public void TestAccess()
        {
            // Arrange
            //Act
            RgaArchiveAccess test = new RgaArchiveAccess();
            //Assert
            test.GetArchive();

            //Arrange
            ArchiveAPI aRapi = new ArchiveAPI();

            aRapi.start = new DateTime(2017, 01, 13, 09, 10, 10);
            aRapi.end = new DateTime(2017, 01, 13, 17, 27, 10);
            aRapi.URL_root = "http://claraserv2:17668/retrieval/data/getData.json?";
            aRapi.myAnaWave.Add(new DataPV() { pv = "rga6" });
            aRapi.GetArchive();
        }
        [TestMethod]
        public void TestData()
        {
         //Arrange
            DataContainer data = new DataContainer();
            data.start =  DateTime.Now;
            data.end   =  DateTime.Today;
            //Act:
            //Add a new strip pv

            data.mystrip.Add(new DataPV() { pv = "testme3" });
            data.mystrip.Add(new DataPV() { pv = "testme4" });
            data.mystrip.Add(new DataPV() { pv = "testme5" });

            data.myAnaWave.Add(new DataPV() { pv = "Ana" });
            data.myAnaWave[0].data.Add(new DataElement() { time = DateTime.Now, mass = 4, pres = 0.25 });
            data.myAnaWave[0].data.Add(new DataElement() { time = DateTime.Now, mass = 5, pres = 0.25 });
            data.myAnaWave[0].data.Add(new DataElement() { time = DateTime.Now, mass = 6, pres = 0.25 });
            data.myAnaWave[0].data.Add(new DataElement() { time = DateTime.Now, mass = 7, pres = 0.25 });
            data.myAnaWave[0].data.Add(new DataElement() { time = DateTime.Now, mass = 8, pres = 0.25 });
            //Assert
            Assert.AreEqual(DateTime.Today, data.end);
            Assert.AreEqual(3, data.mystrip.Count);
            Assert.AreEqual("testme5", data.mystrip[2].pv);
            Assert.AreEqual(8, data.myAnaWave[0].data[4].mass);
        }
    }
}
