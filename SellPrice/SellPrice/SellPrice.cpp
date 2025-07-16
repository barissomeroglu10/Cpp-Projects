/*
In this code, we fill calculate sell price according to tax value.

Developer: Barış Someroğlu
Date: 06.01.2024 / 6:00 p.m.
*/

#include <iostream>

using namespace std;

int main()
{
	double Price, Tax, LastPrice;

	cout << "Please Enter the Price: ";
	cin >> Price;

	cout << "\n";

	cout << "Please Enter Tax: ";
	cin >> Tax;

	cout << "\n";

	LastPrice = Price + ((Price * Tax) / 100);

	cout << "Last Price is " << LastPrice << "!" << endl;

	return 0;
}