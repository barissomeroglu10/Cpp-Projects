/*
In this code, we will get a string array from user and make a reverse array according to the first array.

Developer: Barış Someroğlu
Date: 21.01.2024 / 00:05 a.m.
*/

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
	int n;

	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<string> S(n);

	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter String Value for " << i + 1 << ". Element: ";
		cin >> S[i];
	}

	cout << "\n";

	cout << "Reverse Array is: ";

	for (int j = n - 1; j >= 0; j--)
	{
		cout << S[j] << " ";
	}

	cout << endl;

	return 0;
}