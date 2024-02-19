#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

// Required to access resources programmatically via the ResourceLoader class.
#include "winrt/Microsoft.Windows.ApplicationModel.Resources.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

// Localize your WinUI3 app: https://learn.microsoft.com/en-us/windows/apps/winui/winui3/localize-winui3-app
// Localize strings in your UI and app package manifest: https://learn.microsoft.com/en-us/windows/uwp/app-resources/localize-strings-ui-manifest

namespace winrt::TestWinUI3::implementation
{
    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::DateTimeButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        Microsoft::Windows::ApplicationModel::Resources::ResourceLoader resourceLoader;

        auto clickedText = resourceLoader.GetString(L"DateTimeButton_Clicked");
        dateTimeButton().Content(box_value(clickedText));
    }
}
