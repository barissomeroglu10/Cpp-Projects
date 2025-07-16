/*
In this code, we see main logic for pointers.

Developer = Barış Someroğlu
Date = 25.04.2024 - 06:20 pm
*/

#include <iostream>

using namespace std;

int main()
{
	int Number = 10;
	cout << "Number = " << Number << endl << endl;

	&Number; // We hold the memory address of the normal variable by reference
	cout << "Address of Number = " << &Number << endl << endl;

	int* ptrNumber = &Number; // We hold the memory address with a pointer
	cout << "Address of Number with Pointer = " << ptrNumber << endl << endl;
	
	*ptrNumber = 7; // We change value of normal variable with a pointer
	cout << "New value for Number with Pointer = " << *ptrNumber << endl << endl;

	return 0;
}