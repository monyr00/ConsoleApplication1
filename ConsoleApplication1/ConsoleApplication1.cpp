
#include <iostream>
#include "clsBankClient.h"
#include "clsUser.h"
#include "clsInputValidate.h"
#include "clsMainScreen.h"
#include "clsLoginScreen.h"
#include "Global.h"
#include <iomanip>
using namespace std;


int main()
{

 
	while (true)
	{
		clsLoginScreen::ShowLoginScreen();
	};

	system("pause>0");
	return 0;
	
	
	
}

