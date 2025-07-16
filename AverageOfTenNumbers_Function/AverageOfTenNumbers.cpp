/*
In this code, we will get 10 numbers from user and calculate average for 10 numbers.

Developer: Barış Someroğlu
Date: 13.04.2024 - 09:10 pm
*/



#include <iostream>

using namespace std;

// Prototype declaration for functions
void Result(double);
double Average(double);

int main()
{
	double Number;
	double Total = 0;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Please Enter " << i << ". Number = ";
		cin >> Number;

		Total += Number;
	}

	// Call the function
	Result(Total);

	return 0;
}

// Function declaration
void Result(double Total)
{
	cout << "\n" << "Average of 10 Numbers = " << Average(Total) << endl;
}

// Function declaration
double Average(double Total)
{
	double Average = Total / 10;

	return Average;
}
