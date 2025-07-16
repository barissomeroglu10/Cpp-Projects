/*
In this code, we will figure total and multiplication for odd and even numbers from 1 to 99
and write them on the screen.

Developer: Barış Someroğlu
Date: 31.12.2023
*/


#include <iostream>

using namespace std;

int main()
{
	int Number, OddTotal = 0, OddMultiplication = 1, EvenTotal = 0, EvenMultiplication = 1;
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 2 == 0)
		{
			EvenTotal += i;
			EvenMultiplication *= i;
		}

		else
		{
			OddTotal += i;
			OddMultiplication += i;
		}
	}

	cout << "Total for Odd Numbers from 1 to 99: " << OddTotal << "\n";
	cout << "Multiplication for Odd Numbers from 1 to 99: " << OddMultiplication << "\n";

	cout << "Total for Even Numbers from 1 to 99: " << EvenTotal << "\n";
	cout << "Multiplication for Even Numbers from 1 to 99: " << EvenMultiplication << "\n";

	return 0;
}