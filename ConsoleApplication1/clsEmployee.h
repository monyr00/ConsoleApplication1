#pragma once
#include <iostream>
#include "clsPerson.h";
using namespace std;
class clsEmployee : public clsPerson
{
private:
	string _Title;
	string _Department;
	float _Salary;
public:

	clsEmployee(int ID, string firstName, string lastName, string Email, string phone, string title, string department, float salary)
		:clsPerson(ID, firstName, lastName, Email, phone)
	{
		_Title = title;
		_Department = department;
		_Salary = salary;
	}
	void setTitle(string title) {
		_Title = title;
	}
	void setDepartment(string department) {
		_Department = department;
	}
	void setSalary(float salary) {
		_Salary = salary;
	}

	string Title() { return _Title; }
	string Department() { return _Department; }
	float Salary() { return _Salary; }

	void Print() {
		cout << "Info:\n" << endl;
		cout << "--------------------------------" << endl;
		cout << "ID        :" << ID() << endl;
		cout << "FirstName :" << FirstName() << endl;
		cout << "LastName  :" << LastName() << endl;
		cout << "FullName  :" << FullName() << endl;
		cout << "Email     :" << Email() << endl;
		cout << "Phone     :" << Phone() << endl;
		cout << "Title     :" << _Title << endl;
		cout << "Department:" << _Department << endl;
		cout << "Salary    :" << _Salary << endl;
		cout << "--------------------------------" << endl;
	}


};

