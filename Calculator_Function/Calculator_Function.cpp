/*
A simple calculator which made with switch-case and functions.

Developer = Barış Someroğlu
Date = 17.04.2024 - 11:00 pm
*/

#include <iostream>

using namespace std;

// Prototype declaration for functions
void Result(double, double);
double MathematicalOperation(double, double);

// Globale variable definition
char Operator;
double AfterMath;

int main()
{
	double Number1, Number2;
	
	cout << "Please Enter 1. Number = ";
	cin >> Number1;

	cout << "\n";

	cout << "Please Enter 2. Number = ";
	cin >> Number2;

	cout << "\n";

	// Simple menu
	cout << "Please Enter an Operator : \n\n + for total \n - for subtraction \n * for multiplication \n / for division \n\n Operator = ";
	cin >> Operator;

	cout << "\n";

	// Call function
	Result(Number1, Number2);

	return 0;
}

// Function declaration
void Result(double Number1, double Number2)
{
	cout << "Calculation is = " << MathematicalOperation(Number1, Number2) << endl;
}

// Function declaration
double MathematicalOperation(double Number1, double Number2)
{
	switch (Operator)
	{
	case '+': AfterMath = Number1 + Number2; break;

	case '-': AfterMath = Number1 - Number2; break;

	case '*': AfterMath = Number1 * Number2; break;

	case '/': if (Number2>0)
	{
		AfterMath = Number1 / Number2; break;
	}
			else
	{
		AfterMath = 0;
	}


	default: cout << "Please Enter a Valid Operator!\n\n"; break;
	}

	return AfterMath;
}
