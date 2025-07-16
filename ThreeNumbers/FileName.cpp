/*
We will have three numbers from the user. And put them in an order acording to numbers's value.
But if some of numbers are equal, we will show an error message.

Coder: Bar?? Somero?lu

Date: 10.11.23 / 11.55 p.m.
*/


#include <iostream>

using namespace std;

int main()
{
	double Number1, Number2, Number3;

	cout << "Please Enter Number One: ";
	cin >> Number1;

	cout << "Please Enter Number Two: ";
	cin >> Number2;

	cout << "Please Enter Number Three: ";
	cin >> Number3;

	if (Number1 == Number2 || Number1 == Number3 || Number2 == Number3)
	{
		cout << "Some of the Numbers are Equal. Please Enter Another Numbers!" << endl;
	}

	else if (Number1 > Number2 && Number1 > Number3 && Number3 > Number2)
	{
		cout << "Number 1 > Number 3 > Number 2" << endl;
	}

	else if (Number1 > Number2 && Number1 > Number3 && Number2 > Number3)
	{
		cout << "Number 1 > Number 2 > Number 3" << endl;
	}

	else if (Number2 > Number1 && Number2 > Number3 && Number1 > Number3)
	{
		cout << "Number 2 > Number 1 > Number 3" << endl;
	}

	else if (Number2 > Number1 && Number2 > Number3 && Number3 > Number1)
	{
		cout << "Number 2 > Number 3 > Number 1" << endl;
	}

	else if (Number3 > Number1 && Number3 > Number2 && Number1 > Number2)
	{
		cout << "Number 3 > Number 1 > Number 2" << endl;
	}

	else if (Number3 > Number1 && Number3 > Number2 && Number2 > Number1)
	{
		cout << "Number 3 > Number 2 > Number 1" << endl;
	}


	return 0;
}
