/*
In this code, we will get ten numbers from the user and then will calculate average for the numbers.

Developer: Barış Someroğlu
Date: 06.01.2024 / 7:30 p.m.
*/

#include <iostream>

using namespace std;

int main()
{
	double Number, Average = 0, Total = 0;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Please Enter " << i << ". Number: ";
		cin >> Number;

		Total += Number;
	}

	Average = Total / 10;

	cout << "\n";

	cout << "Average is " << Average << endl;

	return 0;
}