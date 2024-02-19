// MFCLibUI1.h : main header file for the MFCLibUI1 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols




class CMFCLibUI1App : public CWinApp
{
public:
	CMFCLibUI1App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
