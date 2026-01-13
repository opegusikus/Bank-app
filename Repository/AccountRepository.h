#pragma once
#include "Account.h"
using namespace System;
using namespace System::Collections::Generic;

public ref class AccountRepository
{
	List<Account^>^ accounts;
public:
	AccountRepository();
	property List<Account^>^ Accounts
	{
		List<Account^>^ get() {
			return accounts;
		}
		void set(List<Account^>^accounts)
		{
			this->accounts=accounts;
		}
	}
	void Create(Account^ entity);
	void Delete(Account^ entity);
	List<Account^>^ GetAll();
	void Save();
	Account^ Login(String^login, String^ password);
	Card^ FindCard(String^number);
	bool TransferMoney(String^ card1, String^ card2, double sum);

};

