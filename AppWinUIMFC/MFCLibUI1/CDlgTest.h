#pragma once
#include "afxdialogex.h"


// CDlgTest dialog

class CDlgTest : public CDialog
{
	DECLARE_DYNAMIC(CDlgTest)

public:
	CDlgTest(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDlgTest();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = 1005 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
