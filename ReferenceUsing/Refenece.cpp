/*
In this code, we use parameter transfer by reference (&) to find sum of two numbers.

Developer = Barış Someroğlu
Date = 26.04.2024 - 10:50 am
*/

#include <iostream>

using namespace std;

// Prototype for function
double ReferenceTotal(double&, double&);

int main()
{
	double Number1, Number2;

	cout << "Please enter 1. number = ";
	cin >> Number1;

	cout << endl;

	cout << "Please enter 2. number = ";
	cin >> Number2;

	// Call function
	cout << "\nSum is = " << ReferenceTotal(Number1, Number2) << endl;

	return 0;
}

// Function definition and reference section
double ReferenceTotal(double &Number1, double &Number2)
{
	return Number1 + Number2;
}
