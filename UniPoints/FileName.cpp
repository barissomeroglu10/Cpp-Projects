/*
?n this code, we will get exam points from the user and then we will write something 
according to exam point.

Coder: Bar?? Somero?lu

Date: 11.11.23 / 9.40 a.m.
*/




#include <iostream>

using namespace std;

int main()
{
	double ExamPoint;

	cout << "Please Enter Your Exam Point: ";
	cin >> ExamPoint;

	if (ExamPoint < 0 || ExamPoint > 100)
	{
		cout << "Please Enter a Correct Point!!!" << endl;
	}

	else if (ExamPoint >= 90)
	{
		cout << "You Passed the Exam with AA!" << endl;
	}

	else if (ExamPoint >= 80 && ExamPoint < 90)
	{
		cout << "You Passed the Exam with BB!" << endl;
	}

	else if (ExamPoint >= 70 && ExamPoint < 80)
	{
		cout << "You Passed the Exam with BC!" << endl;
	}

	else if (ExamPoint >= 50 && ExamPoint <= 60)
	{
		cout << "You Passed the Exam with CC!" << endl;
	}

	else if (ExamPoint < 50)
	{
		cout << "You Did Not Pass the Exam!" << endl;
	}



	return 0;
}