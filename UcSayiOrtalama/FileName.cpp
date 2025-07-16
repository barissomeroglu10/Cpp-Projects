#include <iostream>
using namespace std;

int main()
{
	int sayi1, sayi2, sayi3, toplam = 0;
	float ortalama;

	cout << "Birinci say?y? giriniz: ";
	cin >> sayi1;

	cout << "?kinci say?y? giriniz: ";
	cin >> sayi2;

	cout << "Üçüncü say?y? giriniz: ";
	cin >> sayi3;

	toplam = sayi1 + sayi2 + sayi3;
	ortalama = toplam / 3;

	cout << "Girilen say?lar?n ortalamas?: " << ortalama << endl;

	return 0;
}