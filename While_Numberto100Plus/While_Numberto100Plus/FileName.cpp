/*

We will write total (from Number which we get from the user to 100) on the screen.

Coder: Bar?? Somero?lu
Date: 13.11.23 / 9.50 a.m.

*/



#include <iostream>

using namespace std;

int main()
{
	int Total = 0, Number;
	
	cout << "Please Enter Number: ";
	cin >> Number;

	while (Number <= 100)
	{
		Total += Number;

		Number++;
	}

	cout << "Total: " << Total << endl;


	return 0;
}