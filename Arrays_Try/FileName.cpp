/* #include <iostream>

using namespace std;

int main()
{
	int A[5];

	A[0] = 98;
	A[1] = 65;
	A[2] = 12;
	A[3] = 0;
	A[4] = -5;

	cout << A[4] << endl;



	return 0;
} */




/* #include <iostream>

using namespace std;

int main()
{
	int A[] = { 98, 65, 12, 0, -5 }; // A0=98, A1=65,..... ,A4=-5 yani üstteki gibi tek tek yazmak yerine liste ?eklinde de yap?labilir

	return 0;
} */




/* #include <iostream>

using namespace std;

int main()
{
	int A[] = { 98, 65, 12, 0, -5 };


	for (int i = 0; i <= 4; i++) // ekrana A dizisinin de?erlerini tek tek yazar içindeki cout komutu ile.
	{
		cout << A[i] << endl;
	}

	return 0;
} */



/* #include <iostream>

using namespace std;

int main()
{
	int A[] = { 98, 65, 12, 0, -5 };

	cout << "Dizinin Ilk Degerini Giriniz: ";
	cin >> A[0]; // dizinin ilk de?eri de?i?tirilir


	for (int i = 0; i <= 4; i++)
	{
		cout << A[i] << endl;
	}

	return 0;
} */


/* #include <iostream>

using namespace std;

int main()
{
	int B[6];

	B[0] = 10;
	B[1] = 7;
	B[2] = 8;
	B[3] = 6;
	B[4] = 9;
	B[5] = 11;


	cout << B[0] << endl;
	cout << B[1] << endl;
	cout << B[2] << endl;
	cout << B[3] << endl;
	cout << B[4] << endl;
	cout << B[5] << endl;

	Bu i?lemi for döngüsü ile yapmak daha mant?kl? tabi.

	return 0;
} */




/* #include <iostream>

using namespace std;

int main()
{
	int C[10];

	for (int i = 0; i < 10; i++) // bu döngü ile diziye 1den 10a kadar de?erler s?ra ile atanacak
	{
		C[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) // bu döngü ile dizinin elemanlar? s?ra ile yaz?lacak
	{
		cout << C[i] << " "; // yan yana aralar?nda bir bo?luk b?rakarak yazmak için böyle yapt?m
	}

	return 0;
} */

