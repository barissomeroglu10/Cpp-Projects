/*
In this code, we will get a number from the user. Then also get a value for ration.
And then we will calculate last number according to ratio.

Developer: Barış Someroğlu
Date: 05.01.2024 / 5:30 p.m.
*/

#include <iostream>

using namespace std;

int main()
{
	int Number, Ratio;
	 double LastNumber;

	cout << "Please Enter the Number: ";
	cin >> Number;

	cout << "\n";

	cout << "Please Enter Ratio: ";
	cin >> Ratio;

	cout << "\n";

	LastNumber = (Number * Ratio) / 100;

	cout << "Last Number is: " << LastNumber << endl;

	return 0;
}