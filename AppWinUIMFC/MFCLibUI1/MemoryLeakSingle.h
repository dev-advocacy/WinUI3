#pragma once
class MemoryLeakSingle
{
	public:
		~MemoryLeakSingle();
		static MemoryLeakSingle& GetInstance();

	private:
		MemoryLeakSingle();

};

