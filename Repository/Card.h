#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::IO;

public ref class Card
{
	String^ cardNumber;
	int cvv;
	int securCode;
	double balance;
public:
	Card(String^cardNumber,int cvv,int securCode);
	Card();
	GroupBox^ CreateCardPanel(Point p);
	property String^ CardNumber
	{
		String^ get() {
			return cardNumber;
		}
		void set(String^ val)
		{
			this->cardNumber = val;
		}
	}
	property int Cvv
	{
		int get() {
			return cvv;
		}
		void set(int value)
		{
			this->cvv = value;
		}
	}
	property int SecurCode
	{
		int get()
		{
			return securCode;
		}
		void set(int value)
		{
			this->securCode = value;
		}
	}
	property double Balance 
	{
		double get() 
		{
			return balance;
		}
		void set(double val) 
		{
			this->balance = val;
		}
	}
};

