/*
In this code, we will calculate factorial, permutation, combination with pointers and functions.

Developer = Barış Someroğlu
Date = 29.04.2024 - 02:10 pm
*/


#include <iostream>

using namespace std;

// Function prototype
int Factorial(int*);
double Permutation(int*, int*);
double Combination(int*, int*);

int Number1, Number2;

int main()
{
	cout << "Please enter first number = ";
	cin >> Number1;

	cout << "\nPlease enter second number = ";
	cin >> Number2;

	cout << "\nFactorial for first number = " << Factorial(&Number1) << endl; // Call function

	cout << "\nFactorial for second number = " << Factorial(&Number2) << endl; // Call function

	cout << "\nPermutation = " << Permutation(&Number1,&Number2) << endl; // Call function

	cout << "\nCombination = " << Combination(&Number1, &Number2) << endl; // Call function

	return 0;
}

// Function definition
int Factorial(int* ptrNumber)
{
	if (*ptrNumber < 0)
		return -1;

	else if (*ptrNumber <= 1)
		return 1;

	else
	{
		int NextNumber = *ptrNumber - 1;

		return *ptrNumber * Factorial(&NextNumber);
	}
}

// Function definition
double Permutation(int* ptrNumber1, int* ptrNumber2) // n! / (n - r) !
{
	int NextValue = *ptrNumber1 - *ptrNumber2;

	return Factorial(&Number1) / Factorial(&NextValue);
}

// Function definition
double Combination(int* ptrNumber1, int* ptrNumber2) // n! / (r! * (n – r)!) ---> Permutation / r!
{
	return Permutation(&Number1,&Number2) / Factorial(&Number2);
}
