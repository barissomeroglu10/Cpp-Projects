/*
This code writes Odd and Even numbers from 0 or 1 to Number whic user entered.

Developer = Barış Someroğlu
Date = 18.04.2024 - 11:00 am
*/

#include <iostream>

using namespace std;

// Prototype declaration for functions
void OddResult(int);
void EvenResult(int);

int main()
{
	int Number;

	cout << "Please Enter a Number = ";
	cin >> Number;

	cout << "\n";

	// Call function
	OddResult(Number);

	return 0;
}

// Function definiton
void OddResult(int Number)
{
	if (Number % 2 != 0)
	{
		cout << "Odd Numbers are:\n\n";

		for (int i = 1; i <= Number; i += 2)
		{
			cout << i << "\n";
		}
	}

	else
	{
		// Call function
		EvenResult(Number);
	}
}

// Function definiton
void EvenResult(int Number)
{
	cout << "Even Numbers are:\n\n";

	for (int i = 0; i <= Number; i += 2)
	{
		cout << i << "\n";
	}
}




