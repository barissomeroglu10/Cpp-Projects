#include <iostream>

using namespace std;

int main()
{
	int Number, Total = 0;

	cout << "Please Enter Positive Numbers: ";
	cin >> Number;

	while (true)
	{
		if (Number <= 0)
		{
			cout << "You Entered Negative Number or You Entered Zero." << endl;

			break;
		}

		else
		{
			Total += Number;

			cout << "Total is: " << Total << endl;

			cout << "Please Enter Positive Numbers: ";
			cin >> Number;
		}

	}

	return 0;
}