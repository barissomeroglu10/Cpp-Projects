/*

We will get a number from user which is between 1 and 3. Then write on the screen
which number is entered by the user.

Coder: Bar?? Somero?lu
Date: 18.11.23 / 01.50 a.m.

*/




#include <iostream>

using namespace std;

int main()
{
	int Number;

	cout << "Please Enter a Number between 1 and 3: ";
	cin >> Number;

	switch (Number)
	{
	case 1: 
		cout << "The Number is 1!" << endl; break;

	case 2:
		cout << "The Number is 2!" << endl; break;

	case 3:
		cout << "The Number is 3!" << endl; break;

	default:
		cout << "You Must Enter a Number between 1 and 3!" << endl;

	}

	return 0;
}