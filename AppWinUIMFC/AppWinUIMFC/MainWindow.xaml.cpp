#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include "..\MFCLibUI1\DlgTestExport.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;


namespace winrt::AppWinUIMFC::implementation
{
    /// <summary>
    ///  
    /// </summary>
    /// <param name=""></param>
    /// <param name=""></param>
    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        DlgTestExport sample;
        sample.DoModal();
    }
}