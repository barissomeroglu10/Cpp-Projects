/*
In this code we will get a text from the user
and will write the text ten times on the screen.
And also we will show the user a counter about how many times we wrote.

Developer: Barış Someroğlu
Date: 21.12.23 / 1.30 p.m.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string Text;
	int Counter = 0;

	cout << "Please Enter the Text: ";
	cin >> Text;

	cout << "\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << Text << endl;

		Counter++;
	}

	cout << "\n";

	cout << "Counter: " << Counter << endl;

	return 0;
}