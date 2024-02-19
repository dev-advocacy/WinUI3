#pragma once

#ifdef MFCLibUI1
#define PROJECT1_API __declspec(dllexport)
#else
#define PROJECT1_API __declspec(dllimport)
#endif


class PROJECT1_API DlgTestExport
{
public:
	int DoModal();
};

