/*
We will have an array which has 10 element. And then will assign value from 1 to 10
and then write the array on the screen.

Developer: Bar?? Somero?lu
Date: 01.12.23 / 5:20 p.m.
*/


#include <iostream>
#include <string.h>

using namespace std;


int main()
{
	int x[10];

	for (int i = 0; i < 10; i++)
	{
		x[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << x[i] << " " << endl;
	}

	return 0;
}