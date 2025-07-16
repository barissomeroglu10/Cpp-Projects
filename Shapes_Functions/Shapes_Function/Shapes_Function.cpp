/*
This code shows a shape whic made with functions.

Developer = Barış Someroğlu 
Date = 20.04.2024 - 10:00 pm
*/

#include <iostream>

using namespace std;

// Prototype of function
void DrawSquare();
void DrawTriangle();

int main()
{
	// Call the function
	DrawSquare();
	DrawTriangle();

	return 0;
}

// Function definition
void DrawSquare()
{
	cout << "----------" << endl;
	cout << "|         |" << endl;
	cout << "| 0     0 |" << endl;
	cout << "|    *    |" << endl;
	cout << "| ------  |" << endl;
	cout << "----------" << endl;
}

// Function definition
void DrawTriangle()
{
	cout << "    / \\  " << endl;
	cout << "   /   \\ " << endl;
	cout << "  /  no \\" << endl;
	cout << " /  hand \\ " << endl;
	cout << "/         \\ " << endl;
	cout << "-----------" << endl;
	cout << " |       | " << endl;
	cout << " |       | " << endl;
	cout << " |       | " << endl;
	cout << " --      -- " << endl;
}
