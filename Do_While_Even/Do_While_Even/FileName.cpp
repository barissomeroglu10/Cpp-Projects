/*

We will get number from user. And then will write even numbers from 0 to the number.

Coder: Bar?? Somero?lu
Date: 16.11.23 / 14.35

*/




#include <iostream>

using namespace std;

int main()
{
	int Number, i = 0;

	cout << "Please Enter Number: ";
	cin >> Number;

	do
	{
		cout << i << endl;

		i += 2;
	
	} while (i <= Number);


}
