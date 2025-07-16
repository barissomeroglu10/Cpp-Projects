﻿/*
In this code, we will get an array from user and will make a reverse array for the same array.

Developer: Barış Someroğlu
Date: 08.01.2024 / 00:30 a.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, Temp;

	cout << "Please Enter Size of Array: ";
	cin >> N;

	cout << "\n";

	vector<int> A(N);

	for (int i = 0; i < N; i++)
	{
		cout << "Please Enter " << i + 1 << ". Element: ";
		cin >> A[i];
	}

	for (int i = 0; i < N / 2; i++)
	{
		Temp = A[i];

		A[i] = A[N - 1 - i];

		A[N - 1 - i] = Temp;
	}

	cout << "\n";

	cout << "New Array is: ";

	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}

	cout << "\n";

	return 0;
}