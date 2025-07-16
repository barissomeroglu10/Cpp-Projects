/*
In this code we will get value from user for index of array
and write array on the screen.

Coder: Barýþ Someroðlu
Date: 07.12.23 / 01:00 a.m.
*/



#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int B[5], Value;

	for (int i = 0; i < 5; i++)
	{
		cout << "Please Enter Value for element of the array: ";
		cin >> Value;

		B[i] = Value;
	}

	cout << " " << endl;
	cout << "Elements for the Array: ";


	for (int i = 0; i < 5; i++)
	{
		cout << B[i] << " ";
	}

	cout << " " << endl;

	return 0;
}
