/*
We will have 2 char array and write them on the screen.
One of them in for loop and one of them directly.

Developer: Bar?? Somero?lu
Date: 01.12.23 / 6 p.m.
*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char c1[7], c2[8];

	c1[0] = c2[0] = 'D';
	c1[1] = c2[1] = 'i';
	c1[2] = c2[2] = 'z';
	c1[3] = c2[3] = 'i';
	c1[4] = c2[4] = 'l';
	c1[5] = c2[5] = 'e';
	c1[6] = c2[6] = 'r';

	for (int i = 0; i < 7; i++)
	{
		cout << c1[i];
	}

	cout << "\n";

	c2[7] = '\0'; // c2 dizisini tek seferde ekrana yazacagimiz için son index'e dizi sonu elemani atamamiz gerekir.
	 // char dizileri tek seferde ekrana yazilacagi zaman veya tek seferde islem yapilacagi zaman son index'e '\0' atanmalidir. 

	cout << c2;

	return 0;
}
