#include <iostream>

using namespace std;

int main()
{
	int Number;

	cout << "Please Enter Number: ";
	cin >> Number;

	switch(Number)
	{
	case 1: cout << "Your Number's Range is: [1-3]" << endl; break;
	case 2: cout << "Your Number's Range is: [1-3]" << endl; break;
	case 3: cout << "Your Number's Range is: [1-3]" << endl; break;

	case 4: cout << "Your Number's Range is: [4-6]" << endl; break;
	case 5: cout << "Your Number's Range is: [4-6]" << endl; break;
	case 6: cout << "Your Number's Range is: [4-6]" << endl; break;
		 
	default: cout << "You Entered a Different Range's Number!" << endl; break;
	}

	return 0;
}