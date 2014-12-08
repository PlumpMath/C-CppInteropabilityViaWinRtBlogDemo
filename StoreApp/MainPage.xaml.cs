using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

namespace StoreApp
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            var csLib = new CsLibrary();
            var cppWrapper = new WindowsRuntimeComponent.CppLogicWrapper();
            WindowsRuntimeComponent.WinRtDataSource.statInstance.ListDelegate = csLib.GetList;
            var result = cppWrapper.IncrementItems();

            List<int> list = new List<int>(result);

            foreach (var item in list)
            {
                ResultTb.Text += item + ", ";
            }
        }
    }
}
