/*

We will get a number from the user. And then we will make addition from 1 to the Number.

Coder: Bar?? Somero?lu

Date: 11.11.23 / 11.30 p.m.

*/


#include <iostream>

using namespace std;

int main()
{
	int Number, Total = 0;

	cout << "Please Enter Your Number: ";
	cin >> Number;

	for (int i = 1; i <= Number; i++)
	{
		Total += i;
	}

	cout << "Total is Equal: " << Total << endl;



	return 0;
}