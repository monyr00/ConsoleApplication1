#pragma once
#include <iostream>
#include "clsString.h"
#include "clsDate.h"
#include "clsUtil.h"

class clsInputValidate
{
public:

	static bool IsNumberBetween(short Number, short From, short To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}

	static bool IsNumberBetween(int Number, int From, int To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}

	static bool IsNumberBetween(float Number, float From, float To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}

	static bool IsNumberBetween(double Number, double From, double To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}

	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To) {
		if (clsDate::CompareDates(From, To) == clsDate::enDateCompare::After)
		{
			clsDate::SwapDates(From, To);
		}
		return (clsDate::CompareDates(Date, To) != clsDate::enDateCompare::After && clsDate::CompareDates(Date, From) != clsDate::enDateCompare::Before);
	}

	static short ReadShortNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		short Number;

		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
		}
		return Number;
	}

	static short ReadShortNumberBetween(short From, short To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		short Number = ReadShortNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadShortNumber();
		}
		return Number;
	}

	static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		int Number;
		
		while (!(cin >> Number)) {
			cin.clear(); 
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			cout << ErrorMessage << endl;
		}
		return Number;
	}

	static int ReadIntNumberBetween(int From, int To, string Message) {
		int Number = ReadIntNumber();
		while (!IsNumberBetween(Number, From, To))
		{
			cout << Message << endl;
			Number = ReadIntNumber();
		}
		return Number;
	}

	static float ReadFloatNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		float Number;

		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
		}
		return Number;
	}

	static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		double Number;

		while (!(cin >> Number)) {
			cin.clear(); 
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			cout << ErrorMessage << endl;
		}
		return Number;
	}

	static double ReadIntNumberBetween(double From, double To, string ErrorMessage = "Number is not in Range") {
		double Number = ReadDblNumber();
		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage << endl;
			Number = ReadDblNumber("the Number is not valid");
		}
		return Number;
	}

	static bool IsValidDate(clsDate Date) {
		return clsDate::IsValidDate(Date);
	}

	static string ReadString() {
		string userInput;
		getline(cin >> ws, userInput);
		return userInput;
	}
};

