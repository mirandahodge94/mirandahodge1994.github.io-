// Division.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float number1;// turn variable number 1 into an int
	int number2;//turn variable number 2 into an int
	float quotient;// turn variable quotient into a float(allow decimal places)
	cout << "Enter two numbers and I will divide" << endl;//prints Enter two numbers and I will divide
	cout << "the first by the second for you." << endl;//prints the first by the second for you.
	cin >> number1 >> number2;// allow user to input 2 numbers
	quotient = static_cast<double>(number1/ number2);// value of quotient is taking a float / an int to get a float
	cout<< quotient;//prints the value of quotient


/*Enter two numbers and I will divide
the first by the second for you.
5 10
0.5Press any key to continue . . .*/

	return 0;
}
