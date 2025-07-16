/*
In this code, we will write the numbers themselves, their squares, cubes and square roots from 0 to 10 to the screen.

Developer: Barış Someroğlu
Date: 06.01.2024 / 8:10 p.m.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double Square, Cube, SquareRoot, Number;

	for (int i = 0; i <= 10; i++)
	{
		Number = i;
		
		Square = i * i;

		Cube = i * i * i;

		SquareRoot = sqrt(i);

		cout << "Number: " << Number << endl;

		cout << "Square: " << Square << endl;

		cout << "Cube: " << Cube << endl;

		cout << "Square Root: " << SquareRoot << endl;

		cout << "\n";

	}

	return 0;
}