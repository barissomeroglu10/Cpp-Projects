/*
User enter a Number and code makes calculations according to conditions.

Developer = Barış Someroğlu
Date = 18.04.2024 - 10:20 am
*/


#include <iostream>
#include <cmath>

using namespace std;

// Prototype declaration for functions
void Result(int);
double Calculation(int);

int main()
{
	int Number;

	cout << "Please Enter a Number = ";
	cin >> Number;

	// Call function
	Result(Number);

	return 0;
}

// Function definition
void Result(int Number)
{
	cout << "Calculation is = " << Calculation(Number) << endl;
}

// Function definition
double Calculation(int Number)
{
	double y;

	// İf-else method in one line ---> ? = if ---> : = else   
	y = (Number >= 30) ? pow(Number, 2) : sqrt(Number);

	return y;
}
