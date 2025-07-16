/*

We will get numbers from user and write the even numbers on the screen. When user entered an odd number, program will break itself.

Coder: Bar?? Somero?lu
Date: 18.11.23 / 00.40 a.m.

*/


#include <iostream>

using namespace std;

int main()
{
	int Number;

	do
	{
		cout << "Please Enter the Number: ";
		cin >> Number;

		cout << Number << endl;

	} while (Number % 2 == 0);

	// in here if you enter an odd number, you will see the number on the screen and then code will break itself

	return 0;
}