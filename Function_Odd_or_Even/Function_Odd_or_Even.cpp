﻿/*
In this code, user enters a number and the code shows that the number is odd or even.

Developer: Barış Someroğlu
Date: 21.03.2024 / 02:10 a.m.
*/

#include <iostream>
#include <string.h>

using namespace std;

string OddorEven(int Number);

int main()
{
	int Number;
	string Result2;

	cout << "Please Enter a Number: ";
	cin >> Number;

	cout << endl;

	Result2 = OddorEven(Number);

	return 0;
}

string OddorEven(int Number)
{
	string Result1;

	if (Number % 2 == 0)
	{
		Result1 = "The Number is Even!";

		cout << Result1 << endl;
	}

	else
	{
		Result1 = "The Number is Odd!";

		cout << Result1 << endl;
	}

	return Result1;
}