#pragma once
using namespace System;
public ref class Deposit
{
	String^ login;
	DateTime today=DateTime::Today;
	int month;
	double sum;
	double interestRate;
public:
	property String^ Login 
	{
		String^ get() {
			return login;
		}
		void set(String^val) {
			login = val;
		}
	}
	property int Month
	{
		int get() {
			return month;
		}
		void set(int val) {
			month=val;
		}
	}
	property double Sum
	{
		double get() {
			return sum;
		}
		void set(double val) {
			sum = val;
		}
	}
	property double InterestRate
	{
		double get() {
			return interestRate;
		}
		void set(double val) {
			interestRate = val;
		}
	}
	void CalculateInterestRate() 
	{
		double rateInOneMonth = 1.5;
		InterestRate = Month * 1.5;
	}
	double GetDepositSum() 
	{
		double res = (interestRate * sum) / 100;
		return res;
	}


};

