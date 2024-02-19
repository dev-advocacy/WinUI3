# WinUI integration with MFC

## This sample, AppWinUIMFC, integrate WinUI 3 with MFC.

It is a simple WinUI 3 application that call MFC Dialog.


[![Windows Build/Release](https://github.com/dev-advocacy/WebView2/actions/workflows/windowsbuild.yml/badge.svg)](https://github.com/dev-advocacy/WebView2/actions/workflows/windowsbuild.yml)
[![License](https://img.shields.io/badge/License-Apache_2.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

## Overview
This sample is built as a Unpackaged app (WinUI in Desktop)
It uses C++ in the native environment 

- Sample name: SolAppWinUIMFC
- Solution file: SolAppWinUIMFC.sln (located in the parent directory, \WinUI\AppWinUIMFC)
	- WinUI Project name in Solution Explorer: AppWinUIMFC
	- MFC Project name in Solution Explorer: MFCLibUI1
		


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
	