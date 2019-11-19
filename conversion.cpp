// Conversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double fahrenheit1; //allows for decimal places for farenheit 1
	double fahrenheit2; //allows for decimal places for farenheit 2
	double fahrenheit3; //allows for decimal places for farenheit 3
	double fahrenheit4; //allows for decimal places for farenheit 4
	double fahrenheit5;//allows for decimal places for farenheit 5
	double celsius1;//allows for decimal places for celsius 1
	double celsius2;//allows for decimal places for celsius 2
	double celsius3;//allows for decimal places for celsius 3
	double celsius4;//allows for decimal places for celsius 4
	double celsius5;//allows for decimal places for celsius 5
	cout << "Enter five temperature values in Fahrenheit:" << endl;//prints please enter 5 farenheit values
	cin >> fahrenheit1 >> fahrenheit2 >> fahrenheit3 >> fahrenheit4 >> fahrenheit5;//allows user to input 5 farenheit values
	celsius1 = (fahrenheit1 - 32) * 5 / 9;//value of celsius temp 1
	celsius2 = (fahrenheit2 - 32) * 5 / 9;//value of celsius temp 2
	celsius3 = (fahrenheit3 - 32) * 5 / 9;//value of celsius temp 3
	celsius4 = (fahrenheit4 - 32) * 5 / 9;//value of celsius temp 4
	celsius5 = (fahrenheit5 - 32) * 5 / 9;//value of celsius temp 5
	cout << left << setw(14) << "fahrenheit" << right << setw(13) << "celsius" << endl; //prints farenheit to the left and celsius to the right 
	cout << "--------------------------------------------" << endl;
	cout << left << setw(12) << fixed << setprecision(2) << fahrenheit1 << right << setw(15) << celsius1 << endl;//printing farenheit 1 and celsius 1--set precision include decimals
	cout << left << setw(12) << fahrenheit2 << right << setw(15) << celsius2 << endl;//printing farenheit 1 and celsius 1
	cout << left << setw(12) << fahrenheit3 << right << setw(15) << celsius3 << endl;//printing farenheit 1 and celsius 1
	cout << left << setw(12) << fahrenheit4 << right << setw(15) << celsius4 << endl;//printing farenheit 1 and celsius 1
	cout << left << setw(12) << fahrenheit5 << right << setw(15) << celsius5 << endl;//printing farenheit 1 and celsius 1

	/*Enter five temperature values in Fahrenheit:
-999.99 32.0 98.6 212.0 999.99
fahrenheit           celsius
--------------------------------------------
-999.99             -573.33
32.00                  0.00
98.60                 37.00
212.00               100.00
999.99               537.77
Press any key to continue . . .*/	

	return 0;
}

