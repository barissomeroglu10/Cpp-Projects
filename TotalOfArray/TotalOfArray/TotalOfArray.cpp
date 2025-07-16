/*
In this code, we will get a number from user for the size of array. And also user will enter value
for all elements of the array. Then we will calculate total of the elements.

Developer: Barış Someroğlu
Date: 07.01.2024 / 00:40 a.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int Size, Total = 0;

	cout << "Please Enter Size of Array: ";
	cin >> Size;

	cout << "\n";

	vector<int> A(Size);

	for (int i = 0; i < Size; i++)
	{
		cout << "Please Enter Value for index " << i << ":";
		cin >> A[i];

		Total += A[i];
	}

	cout << "\n";

	cout << "Total is " << Total << endl;

	return 0;
}