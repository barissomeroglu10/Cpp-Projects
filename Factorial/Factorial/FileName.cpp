/*

We are getting a number from user and calculating its factorial.

Coder: Bar?? Somero?lu

Date: 12.11.23 / 11.30 a.m.

*/


#include <iostream>

using namespace std;

int main()
{
	int Number, Factorial = 1;

	cout << "Please Enter Number: ";
	cin >> Number;

	if (Number < 0)
	{
		cout << "Your Number is Negative and There is no Factorail for Negative Numbers!" << endl;
	}

	else
	{
		for ( int i = 1; i <= Number; i++ )
		{
			Factorial *= i;
		}

		cout << "Factorial is: " << Factorial << endl;
	}


	return 0;
}