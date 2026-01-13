
#include <iostream>
#include "MyForm.h"
#include"LoginForm.h"
using namespace BankApp;
int main() {
	LoginForm^ loginForm = gcnew LoginForm();
	/*AccountRepository^ repository = gcnew AccountRepository();
	MyForm^ myForm = gcnew MyForm();
	myForm->LoginAccount = repository->Login("Nick123", "ITfox565");
	Application::Run(myForm);*/
	Application::Run(loginForm);
}