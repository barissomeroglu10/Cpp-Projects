/*
In this code we calculate age with pointer and function

Developer = Barış Someroğlu
Date = 10.06.2024
*/

#include <iostream>

using namespace std;

// Function prototype
void AgeCalculator(int*, int*);

int main()
{
	int BirthTime, Year;

	cout << "Please Enter Your Birth Year = ";
	cin >> BirthTime;

	cout << "\nPlease Enter Year = ";
	cin >> Year;

	// Call function
	AgeCalculator(&BirthTime, &Year);

	return 0;
}

// Function definition
void AgeCalculator(int* BirthTime, int* Year)
{
	cout << "\nYour Age = " << (*Year - *BirthTime) << endl;
}
