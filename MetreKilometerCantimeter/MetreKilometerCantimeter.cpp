/*
In this code, we get a number for length from the user. Then convert the length from
metre to kilometer and metre to centimeter.


Developer: Barış Someroğlu
Date: 05.01.2024 / 4.20 p.m.
*/

#include <iostream>

using namespace std;

int main()
{
	double m, km, cm;

	cout << "Please Enter Length: ";
	cin >> m;

	cout << "\n";

	km = m / 1000;
	cm = m * 100;

	cout << "km value for the length: " << km << endl;

	cout << "cm value for the length: " << cm;

	cout << "\n";

	return 0;
}