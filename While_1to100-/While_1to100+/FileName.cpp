/*

In this code we will write total( from 1 to 100) on the screen.

Coder: Bar?? Somero?lu
Date: 13.11.23 / 9.10 a.m.

*/



#include <iostream>

using namespace std;

int main()
{
	int Total = 0, i = 0;

	while (i <= 100)
	{
		Total += i;
		
		i++;

	}

	cout << "Total: " << Total << endl;



	return 0;
}