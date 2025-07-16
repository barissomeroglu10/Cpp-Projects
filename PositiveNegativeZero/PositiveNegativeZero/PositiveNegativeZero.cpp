/*
In this code we will get a number from user and will write on the screen number is +, - or zero.

Developer: Barış Someroğlu
Date: 01.01.2024 / 2:30 p.m.
*/

#include <iostream>

using namespace std;

int main()
{
	int Number;

	cout << "Please Enter the Number: ";
	cin >> Number;

	if (Number > 0)
	{
		cout << "Your Number is Positive!" << endl;
	}

	else if (Number < 0)
	{
		cout << "Your Number is Negative!" << endl;
	}

	else
	{
		cout << "Your Number is Zero!" << endl;
	}

	return 0;
}