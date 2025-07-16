/*
In this code, user will enter some x and y value for (x,y) points. And we will show, which area the points in. 

Developer: Barış Someroğlu
Date: 08.01.2024 / 3:00 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, x, y;

	cout << "Please Enter Size of Array: ";
	cin >> N;

	cout << "\n";

	vector<int> A(N), B(N);

	for (int i = 0; i < N; i++)
	{
		cout << "Please Enter X Point: ";
		cin >> A[i];

		cout << "\n";

		cout << "Please Enter Y Point: ";
		cin >> B[i];

		x = A[i]; y = B[i];

		cout << "\n";

		if (x > 0 && y > 0)
		{
			cout << "Your Point is in Area 1!";

			cout << "\n";
		}

		else if (x < 0 && y>0)
		{
			cout << "Your Point is in Area 2!";

			cout << "\n";
		}

		else if (x < 0 && y < 0)
		{
			cout << "Your Point is in Area 3!";

			cout << "\n";
		}

		else
		{
			cout << "Your Point is in Area 4!";

			cout << "\n";
		}

		cout << "\n";
	}

	return 0;
}