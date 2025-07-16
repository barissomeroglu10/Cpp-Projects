#include <iostream>

using namespace std;

int main()
{
	int Number, Total=0;

	cout << "Please Enter Number: ";
	cin >> Number;

	for (int i = 0; i <= Number; i++)
	{
		Total += i; // Toplam = Toplam + i
	}

	cout << "\n Total is: " << Total << endl;


	return 0;
}