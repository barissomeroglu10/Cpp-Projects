/*
In this code, user enters a number and the code shows that the number is +, -, or 0.

Developer: Barış Someroğlu
Date: 21.03.2024 / 02:00 a.m.
*/

#include <iostream>
#include <string.h>

using namespace std;

string PositiveorNegative(int);

int main()
{
	int Number;

	cout << "Please Enter a Number: ";
	cin >> Number;

	cout << "\n";

	string Result = PositiveorNegative(Number);

	return 0;
}

string PositiveorNegative(int Number)
{
	string a;

	if (Number > 0)
	{
		a = "Entered Number is Positive!";

		cout << a << endl;
	}

	else if (Number < 0)
	{
		a = "Entered Number is Negative!";

		cout << a << endl;
	}

	else
	{
		a = "Entered Number is Zero!";

		cout << a << endl;
	}

	return a;
}