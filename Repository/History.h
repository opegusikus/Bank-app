#pragma once
using namespace System;
public ref class History
{
	bool isCredit=false;
	String^ cardNumber;
	String^ operation;
	DateTime^ date;
	double sum;
public:
	property String^ CardNumver {
		String^ get() {
			return cardNumber;
		}
		void set(String^val) {
			cardNumber = val;
		}
	}
	property String^ Operation{
		String^ get() {
			return operation;
		}
		void set(String^ val) {
			operation = val;
		}
	}
	property DateTime^ Date {
		DateTime^ get() {
			return date;
		}
		void set(DateTime^ val) {
			date = val;
		}
	}
	property bool IsCredit {
		bool get() {
			return isCredit;
		}
		void set(bool val) {
			isCredit = val;
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
};

