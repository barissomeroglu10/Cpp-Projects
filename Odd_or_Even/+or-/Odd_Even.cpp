/*
In this code we will get a number from user and will check number is odd or even.

Developer: Barış Someroğlu
Date: 01.01.2024
*/

#include <iostream>

using namespace std;

int main()
{
	int Number;

	
	cout << "Please Enter the Number: ";
	cin >> Number;

	if (Number % 2 == 0)
	{
		cout << "Your Number is Even!" << endl;
	}

	else
	{
		cout << "Your Number is Odd!" << endl;
	}
	

	return 0;
}