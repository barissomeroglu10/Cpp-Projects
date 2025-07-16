/*
In this code, user enter its name and a loop number. Then we will write name under each other
according to loop number.

Developer: Barış Someroğlu
Date: 05.01.2024 / 3:40 p.m
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string Name;
	int Number;

	cout << "Please Enter Your Name: ";
	cin >> Name;
	
	cout << "\n";

	cout << "Please Enter Loop Number: ";
	cin >> Number;

	cout << "\n";

	for (int i = 1; i <= Number; i++)
	{
		cout << i << ".) " << Name << endl;
	}

	return 0;
}