#include "pch.h"
#include "DepositRepository.h"
using namespace System::IO;
using namespace Newtonsoft::Json;
DepositRepository::DepositRepository()
{
	if (deposits->Count == 0) {
		GetAll();
	}
}

void DepositRepository::Create(Deposit^ entity)
{
	if (deposits == nullptr) {
		deposits = gcnew List<Deposit^>();
	}
	deposits->Add(entity);
	Save();
}
List<Deposit^>^ DepositRepository::GetAll()
{
	try {
		String^ allText = File::ReadAllText("files\\deposit.json");
		this->Deposits = JsonConvert::DeserializeObject<List<Deposit^>^>(allText);
		return Deposits;
	}
	catch (...) {}
}
void DepositRepository::Save()
{
	String^ allText = JsonConvert::SerializeObject(deposits, Formatting::Indented);
	File::WriteAllText("files\\deposit.json", allText);
}
Deposit^ DepositRepository::GetDepositByLogin(String^ login) 
{
	for (int i = 0; i < deposits->Count; ++i) 
	{
		if (deposits[i]->Login == login) {
			return deposits[i];
		}
	}
	return nullptr;

	
}