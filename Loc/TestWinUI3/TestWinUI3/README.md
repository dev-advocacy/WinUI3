# WinUI Localization Sample

## This sample, TestWinUI3, Localize the UI of a WinUI 3


[![License](https://img.shields.io/badge/License-Apache_2.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

## Overview
This sample is built as a Unpackaged app (WinUI in Desktop)
It uses C++ in the native environment 

- Sample name: TestWinUI3
	- WinUI Project name in Solution Explorer: TestWinUI3

## Prerequisites
- Windows 10, version 1809 (10.0; Build 17763), or later
- Visual Studio 2022 with the "Desktop development with C++" workload installed
	- Windows App SDK C++ Template 	
- WinRT Tools for C++, Visual Studio Extension you can install from the Visual Studio / Extension / Manage Extensions

See https://learn.microsoft.com/en-us/windows/apps/windows-app-sdk/set-up-your-development-environment?tabs=cs-vs-community%2Ccpp-vs-community%2Cvs-2022-17-1-a%2Cvs-2022-17-1-b for more information on the Windows App SDK.

## Unpackaged WinUI app 
- Unpackaged app require you to enable Developer Mode on your Windows 10 machine and Windows 11 machine. 
	- Go to Settings / Update & Security / For developers / Developer mode
	- You may need to restart your machine after enabling Developer mode (Windows 10 only).

- Install Windows App SDK redist
 - The sample use the latest version (1.4.5), available here : https://learn.microsoft.com/en-us/windows/apps/windows-app-sdk/downloads

## How to Localize your UI WinUI 3 app

See : https://learn.microsoft.com/en-us/windows/uwp/app-resources/localize-strings-ui-manifest

The sample use two languages (English and French) and the resource file are in the folder "Strings" in the project.
To test the localization, install the language pack for French and English in the Windows settings.
Change the language in the Windows settings, log off and log in again to see the change in the UI.
