// thirdtimesacharm.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	double balance;
	char TransChoice;
	double DepositAmount;
	double WithdrawalAmount;
	double CheckAmount;
	double StartBalance = 0;
	double TotalDep = 0;
	double TotalWith = 0;
	double TotalCheck = 0;


	cout << "$$$ Welcome to Bank Account Calculator! $$$" << endl;
	cout << "Enter Balance: " << endl;
	cin >> balance;
	StartBalance += balance;
	cout << "Select Transaction: " << endl;

	do
	{
		cout << "[D]eposit, [W]ithrawal, [C]heck, [Q]uit" << endl;
		cin >> TransChoice;



		switch (TransChoice)
		{
			case 'd':
			case 'D':
				cout << "Enter the amount you'd like to deposit: " << endl;
				cin >> DepositAmount;
				balance += DepositAmount;
				TotalDep = DepositAmount += TotalDep;
				cout << "Your current balance is: " << fixed << setprecision(2) << balance << endl;
				break;

			case 'w':
			case 'W':
				cout << "Enter the amount you'd like to withdraw: " << endl;
				cin >> WithdrawalAmount;

				if (WithdrawalAmount <= balance)
				{
					balance -= WithdrawalAmount;
					cout << "Your current balance is: " << fixed << setprecision(2) << balance << endl;
					TotalWith += WithdrawalAmount += TotalWith;
				}
				else
				{
					cout << "ERROR! INSUFFICIANT FUNDS.";
				}
				break;

			case 'c':
			case 'C':
				cout << "Enter the check amount: " << endl;
				cin >> CheckAmount;

				if (CheckAmount <= balance)
				{
					balance -= CheckAmount;
					cout << "Your current balance is: " << fixed << setprecision(2) << balance << endl;
					TotalCheck = CheckAmount += TotalCheck;
				}
				else
				{
					cout << "Insufficient Funds! BOUNCE CHECK.";
				}
				break;

			default:
				cout << "Invalid Command" << endl;
				break;

		
			case 'q':
			case 'Q':

				cout << "  " << endl;
				cout << "Starting Balance: " << fixed << setprecision(2) << StartBalance << endl;
				cout << "Total Deposits: " << fixed << setprecision(2) << TotalDep << endl;
				cout << "Total Withdrawals: " << fixed << setprecision(2) << TotalWith << endl;
				cout << "Total Checks: " << fixed << setprecision(2) << TotalCheck << endl;
				cout << " " << endl;
				cout << "--------------------------------" << endl;
				cout << " " << endl;
				cout << "Final Balance: " << fixed << setprecision(2) << balance << endl;
				cout << "Thank-you! " << endl;
				cout << " " << endl;





		
		} 





	} while (TransChoice != 'q' && TransChoice != 'Q');



	return 0;
}

