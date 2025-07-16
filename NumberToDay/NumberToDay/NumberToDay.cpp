/*
In this code, user will enter a number and according to the number, we will show which day user is in.

Developer: Barış Someroğlu 
Date: 06.01.2024 / 6:40 p.m.
*/

#include <iostream>

using namespace std;

int main()
{
	int DayNumber;

	cout << "Please Enter the Number: ";
	cin >> DayNumber;

	cout << "\n";

	switch (DayNumber)
	{
	case 1: cout << "You are in Monday!" << endl; break;

	case 2: cout << "You are in Tuesday!" << endl; break;

	case 3: cout << "You are in Wednesday!" << endl; break;

	case 4: cout << "You are in Thursday!" << endl; break;

	case 5: cout << "You are in Friyday!" << endl; break;

	case 6: cout << "You are in Saturday!" << endl; break;

	case 7: cout << "You are in Sunday!" << endl; break;

	default: cout << "Please Enter a Number between 1 and 7!" << endl; break;
	}

	return 0;
}