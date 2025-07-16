/*

We will get numbers from user and will make total with the numbers. But if user enter 0, loop should end.

Coder: Bar?? Somero?lu
Date: 16.11.23 / 13.30

*/




#include <iostream>

using namespace std;

int main()
{
	int Number;
	float Total = 0;


	do
	{
		cout << "Please Enter Number: ";
		cin >> Number;
	
		Total += Number;

		cout << "Total: " << Total << endl;
	
	} while (Number != 0);


}