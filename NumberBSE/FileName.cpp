/*
* 
?n this code we will get two numbers from user. And than will write on the screen
which number is bigger or they are equal if avaliable.

Coder: Bar?? Somero?lu

Date: 10.11.23 / 10.44 p.m.

*/


#include <iostream>

using namespace std;

int main()
{
	double Number1, Number2;

	cout << "Please enter number one: ";
	cin >> Number1;

	cout << "Please enter number two: ";
	cin >> Number2;

	if (Number1 == Number2)
	{
		cout << "Numbers are Equal!" << endl;
	}

	else if (Number1 > Number2)
	{
		cout << "Number One is Bigger than Number Two!" << endl;
	}

	else
	{
		cout << "Number Two is Bigger than Number One!" << endl;
	}

	return 0;
}