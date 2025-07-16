/*
In this code, user will enter three edges of a triangle. According to edges, we will write on the screen
what kind of triangle it is.

Developer: Barış Someroğlu
Date: 05.01.2024 / 5:00 p.m.
*/


#include <iostream>

using namespace std;

int main()
{
	double edge1, edge2, edge3;

	cout << "Please Enter 1. Edge of the Triangle: ";
	cin >> edge1;

	cout << "\n";
	
	cout << "Please Enter 2. Edge of the Triangle: ";
	cin >> edge2;

	cout << "\n";

	cout << "Please Enter 3. Edge of the Triangle: ";
	cin >> edge3;

	cout << "\n";

	if (edge1 == edge2 && edge2 == edge3)
	{
		cout << "This is an Equilateral Triangle" << endl;
	}

	else if (edge1 == edge2 || edge1 == edge3 || edge2 == edge3)
	{
		cout << "This is an Isosceles Triangle" << endl;
	}

	else
	{
		cout << "This is a Scalene Triangle" << endl;
	}


	return 0;
}