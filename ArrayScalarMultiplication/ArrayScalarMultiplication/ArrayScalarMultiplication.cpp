/*
In this code, we will get elements from user for two arrays (A and B). Then we will make scalar multiplication
for the arrays. And then will write the result in array C.

Developer: Barış Someroğlu
Date: 08.01.2024 / 12:46
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cout << "Please Enter Size of Arrays: ";
	cin >> N;

	vector<int> A(N), B(N), C(N);

	cout << "\n";

	for (int i = 0; i < N; i++)
	{
		cout << "Please Enter " << i + 1 << ". Element for array A: ";
		cin >> A[i];

		cout << "Please Enter " << i + 1 << ". Element for array B: ";
		cin >> B[i];

		cout << "\n";
	}

	cout << "\n";

	for (int j = 0; j < N; j++)
	{
		C[j] = A[j] * B[j];

		cout << j + 1 << ". Element for array C: " << C[j] << endl;
	}

	cout << "\n";

	return 0;
}