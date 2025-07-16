/*

?n this code, we will have a total from 0 to 100 and then write on screen the total.

Coder: Bar?? Somero?lu
Date: 18.11.23 / 00.05 a.m.

*/



#include <iostream>

using namespace std;

int main()
{
	int i = 0, Counter = 1, Total = 0;

	do
	{
		Total += i;

		i++;

		Counter++;

	} while (Counter <= 101);

	cout << "Total: " << Total << endl;
	
	return 0;
}