/*
In this code, user will enter value for array (between -100 and 100). Then we will calculate counter for +, - and zero
numbers.

Developer: Barış Someroğlu
Date: 21.01.2024 / 11:50 a.m.
*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, PositiveCounter = 0, NegativeCounter = 0, ZeroCounter = 0;

	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n);

	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter a Value between -100 and 100 for " << i + 1 << ". Element: ";
		cin >> A[i];

		if (A[i] > 0)
		{
			PositiveCounter += 1;
		}

		else if (A[i] < 0)
		{
			NegativeCounter += 1;
		}

		else
		{
			ZeroCounter += 1;
		}
	}

	cout << "\n";

	cout << "Entered Array: ";

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << ", ";
	}

	cout << "\n";

	cout << "There is/are " << PositiveCounter << " Positive Number in the Array!" << endl;

	cout << "There is/are " << NegativeCounter << " Negative Number in the Array!" << endl;

	cout << "There is/are " << ZeroCounter << " Zero in the Array!" << endl;


	return 0;
}