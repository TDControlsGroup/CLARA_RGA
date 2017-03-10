using System.Windows;
using System.Windows.Input;


namespace RgaArchiver
{
    ///<summary>
    /// App to access RGA information for CLARA from the archive
    ///</summary>
    ///
    ///<remarks>
    /// DataContainer: 
    ///  Array of DataElemet over a range of time in seconds
    /// DataElement:
    ///  Array of RgaElements
    /// RgaElement:
    ///  Array of PvSamples
    /// PvSample: Sturucture holding postfix RGA PV info for one moment in time 
    ///</remarks>
    ///
    ///<remarks>
    ///DataToArchive: Manage the data container for RgaArchiveAccess
    ///</remarks>
    ///
    ///<remarks>
    ///DataToArchive: Manage the data container for Plot data
    ///</remarks>
    ///
    ///<remarks>  
    /// RgaArchiveAccess: connect and read from the archive app
    ///</remarks>
    ///
    ///<remarks> 
    /// PlotApp: OxyPlot model for Bar and Ana or PV vs time
    ///</remarks>
    ///
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            //Connect to the archiver
            RgaArchiveAccess myData = new RgaArchiveAccess();
        }

        
    private void NewCommand_CanExecute(object sender, CanExecuteRoutedEventArgs e)
    {
        e.CanExecute = true;
    }

    private void NewCommand_Executed(object sender, ExecutedRoutedEventArgs e)
    {
        MessageBox.Show("The New command was invoked");
    }

}
}
