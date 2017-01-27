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
            test.GetArchive();
            //Assert
        }
        [TestMethod]
        public void TestData()
        {
            //Arrange
            DataContainer data = new DataContainer();
            //Act

            data.AddRga("test2");
            data.GetRga("test").AddPv("pvtest");

            //Assert
            //Add test
            Assert.AreEqual(0,data.AddRga("test"));
            //Fail is we try to add another test that is not unique
            Assert.AreEqual(1, data.AddRga("test")); 
            //See that we have only 2 rgas added (test and test2)
            Assert.AreEqual(2, data.rgas.Count);
            Assert.


        }
    }
}
