/*
In this code we will get value from user for index of array
and write array on the screen and write total of the elements of the array.

Coder: Barış Someroğlu
Date: 07.12.23 / 01:10 a.m.
*/



#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int B[5], Value, Total = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Please Enter Value for element of the array: ";
		cin >> Value;

		B[i] = Value;

		Total += B[i];
	}

	cout << " " << endl;
	cout << "Elements for the Array: ";


	for (int i = 0; i < 5; i++)
	{
		cout << B[i] << " ";
	}

	cout << "\n";

	cout << "Total is: " << Total;

	cout << " " << endl;

	return 0;
}
