#include "pch.h"
#include "AccountRepository.h"
using namespace Newtonsoft::Json;
using namespace System::IO;

AccountRepository::AccountRepository() 
{
	if (Accounts == nullptr) 
	{
		GetAll();
	}
}
void AccountRepository::Create(Account^ entity)
{
	accounts->Add(entity);
	this->Save();
}
void AccountRepository::Delete(Account^ entity) 
{
	this->accounts->Remove(entity);
	this->Save();
}
List<Account^>^ AccountRepository::GetAll() 
{
	String^ allText = File::ReadAllText("files\\accounts.json");
	this->accounts = JsonConvert::DeserializeObject<List<Account^>^>(allText);
	return accounts;
}
void AccountRepository::Save() 
{
	String^ json = JsonConvert::SerializeObject(this->accounts, Formatting::Indented);
	File::WriteAllText("files\\accounts.json", json);
}
Card^ AccountRepository::FindCard(String^ number) 
{
	for (int i = 0; i < Accounts->Count; ++i)
	{
		if (Accounts[i]->Cards != nullptr) {
			for (int j = 0; j < Accounts[i]->Cards->Count; ++j)
			{
				if (Accounts[i]->Cards[j]->CardNumber == number) {
					return Accounts[i]->Cards[j];
				}
			}
		}
	}
	return nullptr;

}


bool AccountRepository::TransferMoney(String^num1,String^num2,double sum) 
{
	try{
	Card^ card1 = FindCard(num1);
	Card^ card2 = FindCard(num2);
	if (card1 == nullptr || card2 == nullptr) 
	{
		return false;
	}
	if (card1->Balance < sum) {
		return false;
	}
	
	card1->Balance -= sum;
	card2->Balance += sum;
	this->Save();
	return true;
	}
	catch (...) 
	{
		return false;
	}
}

Account^ AccountRepository::Login(String^ login, String^ password) 
{
	Account^ findAccount=nullptr;
	for (int i = 0; i < accounts->Count; ++i) 
	{
		if (accounts[i]->Login == login && accounts[i]->Password == password)
			findAccount = accounts[i];
	}
	return findAccount;
}