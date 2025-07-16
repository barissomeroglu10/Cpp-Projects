/*
Code compares two numbers and shows the biggest one with pointers and function.

Developer = Barış Someroğlu
Date = 26.04.2024 - 10:30 am
*/

#include <iostream>

using namespace std;

// Function prototype
int NumberCompare(int*, int*);

int main()
{
	int Number1, Number2;

	cout << "Please Enter 1. Number = ";
	cin >> Number1;

	cout << "Please Enter 2. Number = ";
	cin >> Number2;

	// Assignment prosess
	int* ptrNumber1 = &Number1;
	int* ptrNumber2 = &Number2;

	cout << endl << "The biggest number is = " << NumberCompare(ptrNumber1, ptrNumber2) << endl; // Call function

	return 0;
}

// Function definition
int NumberCompare(int* ptrNumber1, int* ptrNumber2)
{
	return (*ptrNumber1 > *ptrNumber2) ? *ptrNumber1 : *ptrNumber2;
}
