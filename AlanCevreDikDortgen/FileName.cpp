#include <iostream>
using namespace std;

int main()
{
	// burada de?i?kenleri tan?mlad?m
	int KisaKenar, UzunKenar, Alan, Cevre;

	// burada kullan?c?dan k?sa ve uzun kenar? al?yorum
	cout << "K?sa Kenar? Giriniz:";
	cin >> KisaKenar;

	cout << "Uzun Kenar? Giriniz:";
	cin >> UzunKenar;

	// burada alan ve çevreyi bulmak için matematiksel i?lemler yap?yorum
	Alan = KisaKenar * UzunKenar;
	Cevre = 2 * (KisaKenar + UzunKenar);

    // burada alan ve çevre de?erlerini ekrana yazaca??m
	cout << "Alan: " << Alan << endl;
	cout << "Çevre: " << Cevre << endl;

    return 0;
}