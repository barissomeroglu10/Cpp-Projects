/*
In this code, we will get two digits number from user. And write tens digit and ones digit for the number.

Developer: Barış Someroğlı
Date: 01.01.24 / 3:20 p.m.
*/

#include <iostream>

using namespace std;

int main()
{
	int Number, Ones, Tens;

	cout << "Please Enter 'two digits' Number: ";
	cin >> Number;

	if ((Number / 10) >= 10)
	{
		cout << "You Should Enter Two Digits Number!" << endl;
	}

	else
	{
		Ones = Number % 10;
		Number = Number / 10;
		Tens = Number;

		cout << "Ones Digit: " << Ones << endl;
		cout << "Tens Digit: " << Tens << endl;
	}

	return 0;
}