/*
In this code, we will calculate "arithmetic and geometric" average for the array.

Developer: Barış Someroğlu
Date: 08.01.2024 / 3:40 p.m.
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	double Arithmetic, Geometric;

	int N, Total = 0, Multi = 1;

	cout << "Please Enter Size of Array: ";
	cin >> N;

	vector<int> A(N);

	cout << "\n";

	for (int i = 0; i < N; i++)
	{
		cout << "Please Enter " << i + 1 << ". Element: ";
		cin >> A[i];

		Total += A[i];
		Multi *= A[i];
	}

	cout << "\n";

	Arithmetic = Total / N;
	Geometric = pow(Multi, (1.0 / N));

	cout << "Arithmetic Average for array A: " << Arithmetic;

	cout << "\n";

	cout << "Geometric Average for array A: " << Geometric << endl;

	return 0;
}