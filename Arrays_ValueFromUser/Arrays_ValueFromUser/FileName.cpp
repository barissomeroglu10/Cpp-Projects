/*
In this code we will get value from user for ?ndex of array.

Coder: Bar?? Somero?lu
Date: 21.11.23 / 02:00 a.m.
*/





#include <iostream>

using namespace std;

int main()
{
	int B[5], Value;

	for (int i = 0; i <= 4; i++)
	{
		cout << "Please Enter Value of " << i << ". Index: ";
		cin >> Value;

		B[i] = Value;
	}

	return 0;
}