#pragma once
#include <iostream>
#include "clsEmployee.h";
using namespace std;
class clsDeveloper : public clsEmployee
{
private:
	string _MainProgrammingLanguage;
public:

	clsDeveloper(int ID, string firstName, string lastName, string Email, string phone, string title, string department, float salary, string MainProgrammingLanguage)
		:clsEmployee(ID, firstName, lastName, Email, phone, title, department, salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	void setMainProgrammingLanguage(string MainProgrammingLanguage) {
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	string MainProgrammingLanguage() { return _MainProgrammingLanguage; }

	void Print() {
		cout << "Info:\n" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "ID                     :" << ID() << endl;
		cout << "FirstName              :" << FirstName() << endl;
		cout << "LastName               :" << LastName() << endl;
		cout << "FullName               :" << FullName() << endl;
		cout << "Email                  :" << Email() << endl;
		cout << "Phone                  :" << Phone() << endl;
		cout << "Title                  :" << Title() << endl;
		cout << "Department             :" << Department() << endl;
		cout << "Salary                 :" << Salary() << endl;
		cout << "MainProgrammingLanguage:" << _MainProgrammingLanguage << endl;
		cout << "--------------------------------------------------------" << endl;
	}
};

