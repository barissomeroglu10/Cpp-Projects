#include <iostream>
using namespace std;

int main()
{
	// Pi sabiti küsüratl? olaca?? için de?i?ken olarak double tan?mlamam?z gerekiyor
	double Alan, r;

	// Kullan?c?dan yar?çap de?erini alal?m
	cout << "Yar?çap de?erini giriniz:";
	cin >> r;

	// Alan? hesaplay?p ekrana yazal?m
	Alan = 3.14 * r * r;
	cout << "Alan De?eri:" << Alan;

	return 0;
}