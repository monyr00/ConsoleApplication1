#pragma once
#include <iostream>
#include "clsString.h"
#include "clsDate.h"
#include "clsUtil.h"

class clsInputValidate
{
public:
	template<typename T >
	static bool IsNumberBetween(T Number, T From, T To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}

	/*static bool IsNumberBetween(short Number, short From, short To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}*/

	/*static bool IsNumberBetween(int Number, int From, int To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}*/

	/*static bool IsNumberBetween(float Number, float From, float To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}*/

	/*static bool IsNumberBetween(double Number, double From, double To) {
		if (From > To)
		{
			clsUtil::Swap(From, To);
		}
		return(Number <= To && Number >= From);
	}*/

	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To) {
		if (clsDate::CompareDates(From, To) == clsDate::enDateCompare::After)
		{
			clsDate::SwapDates(From, To);
		}
		return (clsDate::CompareDates(Date, To) != clsDate::enDateCompare::After && clsDate::CompareDates(Date, From) != clsDate::enDateCompare::Before);
	}

	template<typename T>
	static T ReadTNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		T Number;

		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
		}
		return Number;
	}

	/*static short ReadShortNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		short Number;

		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
		}
		return Number;
	}*/

	/*static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		int Number;
		
		while (!(cin >> Number)) {
			cin.clear(); 
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			cout << ErrorMessage << endl;
		}
		return Number;
	}*/

	/*static float ReadFloatNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		float Number;

		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
		}
		return Number;
	}*/

	/*static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter Again") {
		double Number;

		while (!(cin >> Number)) {
			cin.clear(); 
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			cout << ErrorMessage << endl;
		}
		return Number;
	}*/

	template<typename T>

	static T ReadTNumberBetween(T From, T To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		short Number = ReadTNumber<T>();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadTNumber<T>();
		}
		return Number;
	}

	/*static short ReadShortNumberBetween(short From, short To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		short Number = ReadTNumber<short>();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadTNumber<short>();
		}
		return Number;
	}*/

	/*static int ReadIntNumberBetween(int From, int To, string Message) {
		int Number = ReadTNumber<int>();
		while (!IsNumberBetween(Number, From, To))
		{
			cout << Message << endl;
			Number = ReadTNumber<int>();
		}
		return Number;
	}*/

	/*static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "Number is not in Range") {
		double Number = ReadTNumber<double>();
		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage << endl;
			Number = ReadTNumber<double>("the Number is not valid");
		}
		return Number;
	}*/

	static bool IsValidDate(clsDate Date) {
		return clsDate::IsValidDate(Date);
	}

	static string ReadString() {
		string userInput;
		getline(cin >> ws, userInput);
		return userInput;
	}

	static char ReadChar() {
		char Character;
		cin >> Character;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return Character;
	}
};

