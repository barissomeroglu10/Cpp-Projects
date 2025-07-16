/*
In this code we will have five numbers: 1 2 3 4 5
And then user will enter a number. According to the number, one line list will be showen on the scree.

Developer: Barış Someroğlu
Date: 12.12.2023 / 10:00 p.m.
*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string a, b, c, d, e;

	string W[5] = { "Ceren", "Helin", "Havin", "Baran", "Azadi"};

	a = "Carla, Bebek, Women, 123, 36.5";
	b = "Harrley, Fenerbahce, Women, 456, 37";
	c = "Hasky, Kadikoy, Women, 789, 36.5";
	d = "Bently, Esenyurt, Man, 101, 42";
	e = "Azadi Kaya, Bagcilar, Man, 202, 43";

	W[0] = a;
	W[1] = b;
	W[2] = c;
	W[3] = d;
	W[4] = e;

	int Number, x;

	cout << "Please Enter the Number: ";
	cin >> Number;

	cout << "\n";

	x = Number - 1;

	cout << W[x] << endl;

	cout << "\n";

	return 0;
}