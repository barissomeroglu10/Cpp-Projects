/*
In this code, we will convert Celcius to Fahrenheit.

Developer: Barış Someroğlu
Date: 13.04.2024 - 07:40 pm
*/


#include <iostream>

using namespace std;

// Prototype declaration for functions
void Result(double);
double Convertor(double);

int main()
{
	double C;

	// Getting value from user
	cout << "Please Enter Value for Celcius : ";
	cin >> C;

	// Call the function
	Result(C);

	return 0;
}

// Function defenition
void Result(double C)
{
	cout << C << " Celcius : " << Convertor(C) << " Fahrenheit" << endl;
}

// Function defenition
double Convertor(double C)
{
	double F;

	F = (C * 1.8) + 32;


	return F;
}
