#pragma once

#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "Global.h"

class clsLoginScreen : protected clsScreen
{
private:

    
   

  

    static bool _Login()
    {
        bool LoginFaild = false;
        short Attempts = 3;

        string Username, Password;
        do
        {
            if (LoginFaild)
            {
                cout << "\nInvalid Username/Password!\n";
                cout << "You have " << --Attempts << " Trial(s) left.\n\n";
            }

            if (Attempts == 0)
            {
                cout << "\nYou are Locked after 3 faild trials.\n";
                return false;
            }

            cout << "Enter Username? ";
            cin >> Username;

            cout << "Enter Password? ";
            cin >> Password;

            CurrentUser = clsUser::Find(Username, Password);

            LoginFaild = CurrentUser.IsEmpty();

        } while (LoginFaild);

		CurrentUser.RegisterLogIn();
    
        clsMainScreen::ShowMainMenue();
        return true; 
    }

public:

    static bool ShowLoginScreen()
    {
        system("cls");
        _DrawScreenHeader("\t  Login Screen");

        return _Login();
    }
};


