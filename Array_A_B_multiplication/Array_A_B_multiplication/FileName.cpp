/*
In this code, we will get N and k from user. Then we will have two array (A and B).
User will enter value for element of A array then will do this: B[] = A[] x k
and then write this on the screen.

Developer: Barış Someroğlu
Date: 12.12.23 / 9:00 p.m.

*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int N, k;
	int i;

	cout << "Please Enter Value for N: ";
	cin >> N;

	cout << "Please Enter Value for k: ";
	cin >> k;

	cout << "\n";

	int* A = new int[N];
	int* B = new int[N];

	for (i = 0; i < N; i++)
	{
		int x = i + 1;

		cout << "Please Enter Value for " << x << ". index: ";
		cin >> A[i];
	}

	cout << "\n";

	for (i = 0; i < N; i++)
	{
		B[i] = k * A[i];

		 cout << B[i] << " ";
	}

	cout << " " << endl;

	return 0;
}