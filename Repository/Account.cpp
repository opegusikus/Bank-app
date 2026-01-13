#include "pch.h"
#include "Account.h"
Account::Account(String^ login, String^ password, String^ numberPhone) 
{
	this->login = login;
	this->password = password;
	this->numberPhone = numberPhone;
	//this->id = id;
}
Account::Account() {

}