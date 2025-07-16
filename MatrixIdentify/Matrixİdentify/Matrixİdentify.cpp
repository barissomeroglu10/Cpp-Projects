/*
In this code, we will identify a matrix with getting value from the user.

Developer: Barış Someroğlu
Date: 09.01.2024 / 11:50 p.m.
*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cout << "Please Enter Size of Array: ";
	cin >> N;

	cout << "\n";

	vector<vector<int>> A(N, vector<int>(N));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << "Enter Element at Position A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}

	cout << "\n";

	cout << "The Matrix Array is:\n";


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << A[i][j] << " ";
		}

		cout << "\n";
	}




	return 0;
}