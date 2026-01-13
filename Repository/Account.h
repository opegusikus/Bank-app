#pragma once
#include"Card.h"
using namespace System;
using namespace System::Collections::Generic;

public ref class Account
{
	String^ login;
	String^ password;
	String^ numberPhone;
	List<Card^>^ cards=gcnew List<Card^>();

public:
	Account(String^ login, String^ password, String^ numberPhone);
	Account();
	
	property String^ Login 
	{
		String^ get() {
			return login;
		}
		void set(String^login) 
		{
			this->login = login;
		}
	}
	property String^ Password 
	{
		String^ get() {
			return password;
		}
		void set(String^ value)
		{
			this->password = value;
		}
	}
	property String^ NumberPhone
	{
		String^ get() 
		{
			return numberPhone;
		}
		void set(String^ value)
		{
			this->numberPhone = value;
		}
	}
	property List<Card^>^ Cards 
	{
		List<Card^>^ get() {
			return cards;
		}
		void set(List<Card^>^ cards) 
		{
			this->cards = cards;
		}
	}

};

         