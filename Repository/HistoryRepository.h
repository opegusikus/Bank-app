#pragma once
#include"History.h"
using namespace System::Collections::Generic;
public ref class HistoryRepository
{
	List<History^>^ histories=gcnew List<History^>();
public:
	HistoryRepository();
	property List<History^>^ Histories
	{
		List<History^>^ get() {
			return histories;
		}
		void set(List<History^>^ hist)
		{
			this->histories = hist;
		}
	}
	void Create(History^ entity);
	List<History^>^ GetAll();
	void Save();
	List<History^>^ GetHistoriesByCardNumber(String^ number);
};

