// CDlgTest.cpp : implementation file
//

#include "pch.h"
#include "MFCLibUI1.h"
#include "afxdialogex.h"
#include "CDlgTest.h"

// CDlgTest dialog

IMPLEMENT_DYNAMIC(CDlgTest, CDialog)

CDlgTest::CDlgTest(CWnd* pParent /*=nullptr*/)
	: CDialog(1005, pParent)
{
}

CDlgTest::~CDlgTest()
{
}

void CDlgTest::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CDlgTest, CDialog)
END_MESSAGE_MAP()
