/*

We will get a number from user and then will write total from 1 to the number.

Coder: Bar?? Somero?lu
Date: 13.11.23 / 9.30 a.m. 

*/



#include <iostream>

using namespace std;

int main()
{
	int Total = 0, i = 0, Number;

	cout << "Please Enter Your Number: ";
	cin >> Number;

	while (i <= Number)
	{
		Total += i;

		i++;

	}

	cout << "Total from 1 to Your Number: " << Total;


	return 0;
}