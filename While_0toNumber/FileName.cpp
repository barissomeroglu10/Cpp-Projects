/*

We will get a number from the user. And we will write on the screen from 1 to the number.

Coder: Bar?? Somero?lu
Date: 12.11.23 / 2.30 p.m.

*/



#include <iostream>

using namespace std;

int main()
{
	int Number, i = 0;

	cout << "Please Enter Number: ";
	cin >> Number;

	while (i < Number)
	{
		i++;
		cout << i << endl;
	}

	

	return 0;
}