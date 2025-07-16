/*
?n this code we will write total of 1+2+3+4+5+6+7+8+9+10=55 on the screen

Coder: Bar?? Somero?lu

Date: 11.11.23 / 11.10 p.m.
*/


#include <iostream>

using namespace std;

int main()
{
	int Total = 0;

	for (int i = 1; i <= 10; i++)
	{
		Total = Total + i; // Plus += ?

	}

	cout << "Total: " << Total << endl;


	return 0;
}