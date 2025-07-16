/*

In this code we get a number from user and according to the number, the code will write a day on the screen.

Coder: Bar?? Somero?lu
Date: 18.11.23 / 6.00 p.m.

*/




#include <iostream>

using namespace std;

int main()
{
	int Number;

	cout << "Please Enter Number: ";
	cin >> Number;

	// 1=Monday ........... 7=Sunday 

	switch (Number)
	{
	case 1:
		cout << "Monday" << endl; break;

	case 2:
		cout << "Tuesday" << endl; break;

	case 3:
		cout << "Wednesday" << endl; break;

	case 4:
		cout << "Thursday" << endl; break;

	case 5:
		cout << "Friday" << endl; break;

	case 6:
		cout << "Saturday" << endl; break;

	case 7:
		cout << "Sunday" << endl; break;

	default:
		cout << "Please Enter a Number between 1 and 7." << endl; break;

	}

	return 0;
}