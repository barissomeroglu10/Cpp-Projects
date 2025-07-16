/*
In this code we will get 3 numbers from the user and will find the biggest number which user entered

Developer: Barış Someroğlu
Date: 31.12.2023
*/



#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3;

	cout << "Please Enter the Numbers: ";
	cin >> n1 >> n2 >> n3;

	cout << "\n";

	if (n1 > n2)
	{
		if (n1 > n3)
		{
			cout << "The Biggest Number is: " << n1 << endl << endl;
		}

		else if (n1 == n3)
		{
			cout << "The Biggest Numbers are: " << n1 << " and " << n3 << "\n";
		}

		else
		{
			cout << "The Biggest Number is: " << n3 << "\n";
		}
	}

	else if (n2 > n1)
	{
		if (n2 > n3)
		{
			cout << "The Biggest Number is: " << n2 << "\n";
		}

		else if (n3 == n2)
		{
			cout << "The Biggest Numbers are: " << n3 << " and " << n2 << "\n";
		}

		else
		{
			cout << "The Biggest Number is: " << n3 << "\n";
		}
	}

	else if (n1 > n3)
	{
		cout << "The Biggest Numbers are: " << n1 << " and " << n2 << "\n";
	}

	else if (n1 == n3)
	{
		cout << "The Biggest Numbers are: " << n1 << " and " << n2 << " and " << n3 << "\n";

	}

	else
	{
		cout << "The Biggest Number is: " << n3 << "\n";
	}


	return 0;
}
