/*
In this code we will have an array which have 10 for the size. And then we will have subtotal which include array's elements total.

Developer: Barýþ Someroðlu
Time: 7.12.23 / 10:30 p.m.
*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int SubTotal = 0;
	int B[10] = { 3, 6, 9, 36, 63, 39, 69, 93, 96, 99 };

	for (int i=0; i < 10; i++)
	{
		SubTotal += B[i];

		int y = 0;
		y = i + 1;

		cout << "SubTotal in " << y << ". Step: " << SubTotal << endl;
	}

	return 0;
}