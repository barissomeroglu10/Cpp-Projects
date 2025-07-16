/*
Code Goal: We will get a number from user. And our code will show us this number +, - or zero.

Coder: Bar?? Somero?lu

Date: 04.11.23 / 00:12
*/


#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	// I am identifing a number
	int Number;

	// Time to get the number from the user
	cout << "Please enter the Number: ";
	cin >> Number;

	// Time for the Conditions
	if(Number == 0)
	{
		cout << "Your Number is Zero" << endl;
	}

	else {
		if(Number > 0)
		{
			cout << "Your Number is Positive" << endl;
		}
		else { cout << "Your Number is Negative" << endl; }

	}

	return 0;
}
