/*
In this code we multiply two value and return the result as type of first value.
Purpose of the code is learn how to use template.

Developer: Barış Someroğlu
Date: 07.07.2024 - 07:10 pm
*/

#include <iostream>

using namespace std;

// Template function definiton
template <typename T, typename U>
T Multiplication(T x, U y)
{
	return x * y;
}

int main()
{
	// Change colour of console
	system("color E9");

	// Send different value to the template function
	cout << "Multiplication1 : " << Multiplication(10, 7.98) << endl;
	cout << "\nMultiplication2 : " << Multiplication(7.98, 10) << endl;
	cout << "\nMultiplication3 : " << Multiplication('0', 10) << endl;
	cout << "\nMultiplication4 : " << Multiplication(7.98, '10') << endl;
	cout << "\nMultiplication2 : " << Multiplication('7.98', '11') << endl;

	return 0;
}