/*
In this code, we will calculate a total from 1 to Number. We get number from user.

Developer: Barış Someroğlu
Date: 16.04.2024 - 01:30 pm
*/


#include <iostream>

using namespace std;

// Prtototype for functions
void Result(int);
int TotalOfNumber(int);

// Globale variable
int Total = 0;

int main()
{
	int Number;
	
	cout << "Please Enter a Number = ";
	cin >> Number;

	// Call the function
	Result(Number);


	return 0;
}

// Function defenation
void Result(int Number)
{
	cout << "Result is = " << TotalOfNumber(Number) << endl;
}

// Function defenation
int TotalOfNumber(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		Total += i;
	}
	
	return Total;
}
