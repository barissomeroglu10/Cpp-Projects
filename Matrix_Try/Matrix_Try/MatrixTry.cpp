/*
First code on Matrix.
İn here we write a matrix on the screen.
*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int Matrix[3][3] = { {1, 2, 3},
						 {4, 5, 6},
		                 {7, 8, 9} };

	
	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			Matrix[i][j];
			cout << Matrix[i][j] << "  ";
		}

		cout << endl;
	}



	return 0;
}