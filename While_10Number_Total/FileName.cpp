#include <iostream>

using namespace std;

int main()
{
	int Number, Counter = 1, Total = 0;

	while (Counter <= 10)
	{
		cout << Counter << ". Number: ";
		cin >> Number;

		Total += Number;

		Counter++;

	}

	cout << "Total of the Numbers is: " << Total << endl;


	return 0;
}