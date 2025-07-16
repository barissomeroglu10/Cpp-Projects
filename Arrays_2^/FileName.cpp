/*
This array writes multiples of 2 up to the 10th multiple to the screen.

Coder: Bar?? Somero?lu
Date: 20.11.23 / 10:00 p.m.

*/


#include <iostream>

using namespace std;

int main()
{
	int B[10];

	for ( int i = 0; i < 10; i++ )
	{
		if (i == 0)
		{
			B[0] = 2;
		}

		else
		{
			B[i] = B[i - 1] * 2;
		}

	}


	for (int i = 0; i < 10; i++)
	{
		cout << B[i] << endl;
	}


	return 0;
}