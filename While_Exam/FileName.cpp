/*

We will get 3 exams's point from the user and will write average of them with while.

Coder: Bar?? Somero?lu
Date: 13.11.23 / 11.00 a.m.

*/





#include <iostream>

using namespace std;

int main()
{
	float Average, Exam1, Exam2, Exam3;
	int Counter = 0;

	while (Counter < 3)
	{
		cout << "Please Enter First Exam: ";
		cin >> Exam1;
		
		Counter ++;

		cout << "Please Enter Second Exam: ";
		cin >> Exam2;

		Counter ++;

		cout << "Please Enter Third Exam: ";
		cin >> Exam3;

		Counter ++;
		
	}

	Average = ( Exam1 + Exam2 + Exam3 ) / 3;

	cout << "Avagreage is: " << Average << endl;


	return 0;
}