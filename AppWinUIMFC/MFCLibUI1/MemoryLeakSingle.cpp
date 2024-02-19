#include "pch.h"
#include "MemoryLeakSingle.h"



MemoryLeakSingle::MemoryLeakSingle()
{
	#if !defined(NDEBUG)
		AfxEnableMemoryLeakDump(false);
	#endif
}

MemoryLeakSingle::~MemoryLeakSingle()
{
}


MemoryLeakSingle& MemoryLeakSingle::GetInstance()
{
	static MemoryLeakSingle Instance;
	return Instance;
}