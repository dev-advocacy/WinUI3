#include "pch.h"
#include "CDlgTest.h"
#include "DlgTestExport.h"
#include "MemoryLeakSingle.h"

int DlgTestExport::DoModal()
{
	auto& instance = MemoryLeakSingle::GetInstance();

	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CDlgTest sample;
	return (int) sample.DoModal();
}