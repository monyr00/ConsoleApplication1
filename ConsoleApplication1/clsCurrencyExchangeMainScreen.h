#pragma once

#include <iostream>
#include <iomanip>
#include "clsInputValidate.h"
#include "clsCurrenciesListScreen.h"


using namespace std;

class clsCurrencyExchangeMainScreen :protected clsScreen
{
private:
    enum enCurrencyExchangeOptions
    {
        eListCurrencies = 1,
		eFindCurrency = 2,
		eUpdateRate = 3,
		eCurrencyCalculator = 4,
		eMainMenue = 5
    };

    static short _ReadCurrencyExchangeMainMenuOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
        short Choice = clsInputValidate::ReadShortNumberBetween(1, 5, "Enter Number between 1 to 5? ");
        return Choice;
    }
    static void _GoBackToCurrencyExchangeMainMenue()
    {
        cout << setw(37) << left << "" << "\n\tPress any key to go back to Main Menue...\n";
        system("pause>0");
        ShowCurrencyExchangeMainScreen();
	}
    static void _ShowListCurrenciesScreen()
    {
		clsCurrenciesListScreen::ShowCurrenciesListScreen();
	}
    static void _ShowFindCurrencyScreen()
    {
        // Implement the logic to find a currency
    }
    static void _ShowUpdateRateScreen()
    {
        // Implement the logic to update currency rates
	}
    static void _ShowCurrencyCalculatorScreen()
    {
        // Implement the logic for currency calculator
    }

    static void _PerformCurrencyExchangeMainMenuOption(enCurrencyExchangeOptions enCurrencyExchangeOptions)
    {
        switch (enCurrencyExchangeOptions)
        {
        case enCurrencyExchangeOptions::eListCurrencies:

            system("cls");
            _ShowListCurrenciesScreen();
            _GoBackToCurrencyExchangeMainMenue();
            break;

        case enCurrencyExchangeOptions::eFindCurrency:

            system("cls");
            _ShowFindCurrencyScreen();
            _GoBackToCurrencyExchangeMainMenue();
            break;

        case enCurrencyExchangeOptions::eUpdateRate:

            system("cls");
            _ShowUpdateRateScreen();
            _GoBackToCurrencyExchangeMainMenue();
            break;

        case enCurrencyExchangeOptions::eCurrencyCalculator:

            system("cls");
            _ShowCurrencyCalculatorScreen();
            _GoBackToCurrencyExchangeMainMenue();
            break;

        case enCurrencyExchangeOptions::eMainMenue:
        {
            //Main menu will handle this option
        }

        
    }

    }
public:

	static void ShowCurrencyExchangeMainScreen()
	{
        system("cls");
        _DrawScreenHeader("Currency Exchange Main Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\tCurrency Exchange Main Menu\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
        cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
        cout << setw(37) << left << "" << "\t[3] Update Rate.\n";
        cout << setw(37) << left << "" << "\t[4] Currency Calculator.\n";
        cout << setw(37) << left << "" << "\t[5] Main Menue.\n";
        cout << setw(37) << left << "" << "===========================================\n";
		
		_PerformCurrencyExchangeMainMenuOption((enCurrencyExchangeOptions)_ReadCurrencyExchangeMainMenuOption());
	}
};

