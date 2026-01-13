#include "pch.h"
#include "HistoryRepository.h"
using namespace Newtonsoft::Json;
using namespace System::IO;
HistoryRepository::HistoryRepository() 
{
	if (histories->Count == 0) {
		GetAll();
	}
}

void HistoryRepository::Create(History^ entity) 
{
	if (histories == nullptr) {
		histories = gcnew List<History^>();
	}
	histories->Add(entity);
	Save();
}
List<History^>^ HistoryRepository::GetAll() 
{
	try {
		String^ allText = File::ReadAllText("files\\history.json");
		this->Histories = JsonConvert::DeserializeObject<List<History^>^>(allText);
		return Histories;
	}
	catch(...){}
}
void HistoryRepository::Save() 
{
	String^ allText = JsonConvert::SerializeObject(histories, Formatting::Indented);
	File::WriteAllText("files\\history.json", allText);
}
List<History^>^ HistoryRepository::GetHistoriesByCardNumber(String^ number) 
{
	
		List<History^>^ hist = gcnew List<History^>();
		if (Histories != nullptr) {
			for (int i = 0; i < Histories->Count; ++i) {
				if (Histories[i]->CardNumver == number) {
					hist->Add(Histories[i]);
				}
			}
		}
		return hist;
	
}