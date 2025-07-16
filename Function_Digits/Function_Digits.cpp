/*
In this code we will find digits for a two digits number.

Developer: Barış Someroğlu
Date: 21.03.2024 / 02:40
*/

#include <iostream>

using namespace std;

// prototype declaration for functions
int OnesDigit(int);
int TensDigit(int);

int main()
{
	int Number;

	cout << "Please Enter a Number: ";
	cin >> Number;

	cout << "\n";

	cout << "Number of Ones Digit: " << OnesDigit(Number) << endl;

	cout << "\n";

	cout << "Number of Tens Digit: " << TensDigit(Number) << endl;

	return 0;
}

int OnesDigit(int Number) // this function finds number of ones digit
{
	int Ones = Number % 10;

	return Ones;
}

int TensDigit(int Number) // this function finds number of tens digit
{
	int Tens = Number / 10;

	return Tens;
}