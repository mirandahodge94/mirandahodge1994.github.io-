#include "stdafx.h"
#include<iostream>
using namespace std;
#include<string>


int main()
{
	string answer;
	double loan;
	double yearlyincome;

	do {

		cout << "would you like to take out a loan?"; {//Ask the user if they want to take out a loan
			cin >> answer;
		}
		if (answer == "No" || answer == "N" || answer == "no" || answer == "n") {//If the answer is No, N, no or n then
			cout << "Thanks for visiting the bank!" << endl;//this statement will print
			return 0;

			if (answer != "Yes" || answer != "Y" || answer != "yes" || answer != "y" || answer != "No" || answer != "N" || answer != "no" || answer != "n")
				cout << "invalid" << endl;
		}
		else if (answer == "Yes" || answer == "Y" || answer == "yes" || answer == "y") {//otherwise if the user put Yes, Y, yes or y then
		}
		do {
			cout << "How much would you like to borrow ?";//this statement will print
			cin >> loan;//input the loan amount
			if (loan < 0) { // //if loan is less then 0
				cout << "Please enter a positive number";//enter a positive number
			}
			else if (loan > 0) { // otherwise if loan is greatthan 0
				cout << "What is your yearly income"; //you will print this statement
				cin >> yearlyincome;
			}
			if (yearlyincome <= 10000) { //if yearly income is less than or equal to 10,000 
				cout << "sorry" << endl;//print this statement
			}
			else if (yearlyincome > 10000 && yearlyincome < 100000) { //else if this yearly income is  greater than 10000 or less than 100000
			}
			if ((yearlyincome * 5) >= loan) { // and if yearly income *5 is  greater than or equal to loan
				cout << "congrats";// then this statement will print
			}
			else if ((yearlyincome * 5) < loan) {// else if yearly income time 5 less than loan
				cout << "Please enter a positive number";// then have to enter positive number again
			}
			while (yearlyincome < 0);// while yearly income is greater than 0
			return 0;// you will return 0

		} while (loan < 0);// while loan is less than 0
		cout << "Invalid choice please enter" << endl;

		//else if((answer != "Yes" || answer != "Y" || answer != "yes" || answer != "y" || answer != "No" || answer != "N" || answer != "no" || answer != "n"))
			//cout << "invalid";
		//while (answer != "Yes" || answer != "Y" || answer != "yes" || answer != "y" || answer != "No" || answer != "N" || answer != "no" || answer != "n");
		//cout << "invalid";
		//}

		return 0;
	}
