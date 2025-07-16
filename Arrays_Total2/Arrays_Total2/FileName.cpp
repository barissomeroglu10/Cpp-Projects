/*
We will have a default array. ?n this code our goal is: We will have subtotal in every index.

Coder: Bar?? Somero?lu
Date: 22.11.23 / 11.45 p.m.

*/




#include <iostream>

using namespace std;

int main()
{
	int SubTotal = 0;
	int B[10] = { 10,65,7,9,8,3,6,47,85,100 };

	for (int i = 0; i < 10; i++)
	{
		SubTotal += B[i];

		cout << "Subtotal at " << i << ". Step: " << SubTotal << endl;
	}


	return 0;
}