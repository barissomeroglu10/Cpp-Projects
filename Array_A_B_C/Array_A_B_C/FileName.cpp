/*
Ýn this code we will assign array size(N), array A, B and C. And the we will make this transaction: C=A+B
Then we will write array C on the screen.

Developer: Barýþ Someroðlu
Date: 08.12.23 / 00:30 a.m.
*/

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
	int N;

	cout << "Please Enter Array Size: ";
	cin >> N;

	cout << "\n";

	vector<int> A(N), B(N), C(N);

	for (int i = 0; i < N; i++)
	{
		int x = 0; 
		x = i+1;

		cout << "Please Enter Value for the " << x << ". index of A array: ";
		cin >> A[i];

		cout << "Please Enter Value for the " << x << ". index of B array: ";
		cin >> B[i];
	}

	for (int j = 0; j < N; j++)
	{
		C[j] = A[j] + B[j];
	}

	cout << "\n";

	for (int k = 0; k < N; k++)
	{
		cout << C[k] << " ";
	}

	cout << "\n";

	return 0;
}