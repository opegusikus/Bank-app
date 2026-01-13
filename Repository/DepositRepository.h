#pragma once
#include"Deposit.h"
using namespace System::Collections::Generic;

public ref class DepositRepository
{
	List<Deposit^>^ deposits = gcnew List<Deposit^>();
public:
	DepositRepository();
	property List<Deposit^>^ Deposits
	{
		List<Deposit^>^ get() {
			return deposits;
		}
		void set(List<Deposit^>^ val)
		{
			this->deposits = val;
		}
	}
	void Create(Deposit^ entity);
	List<Deposit^>^ GetAll();
	void Save();
	Deposit^ GetDepositByLogin(String^login);
};

