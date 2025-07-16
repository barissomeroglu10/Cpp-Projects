/*

We will get a number from the user and will have total for odd numbers from 1 to the number.

Coder: Bar?? Somero?lu
Date: 13.11.23 / 11 p.m.

*/





#include <iostream>

using namespace std;

int main()
{
	int Number, i = 1, Total = 0;

	cout << "Please Enter the Number: ";
	cin >> Number;

	while (i <= Number)
	{
		Total += i;

		i += 2;
	}

	cout << "Total (for odd numbers) from 1 to " << Number << ": " << Total << endl;


	return 0;
}