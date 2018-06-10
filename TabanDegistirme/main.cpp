#include <iostream>

using namespace std;

void onluk_tabana_donustur(int verilen_taban, int sayi, int *sonuc) {
    int kalan, bolum, carpim = 1;
    *sonuc = 0;
    while (sayi != 0) {
        kalan = sayi % 10;
        *sonuc += kalan * carpim;
        bolum = sayi / 10;
        sayi = bolum;
        carpim *= verilen_taban;
    }
}

void onluk_tabandan_donustur(int istenilen_taban, int sayi, int *sonuc) {
    int kalan, bolum, carpim = 1;
    *sonuc = 0;
    while (sayi != 0) {
        kalan = sayi % istenilen_taban;
        *sonuc += carpim * kalan;
        bolum = sayi / istenilen_taban;
        sayi = bolum;
        carpim *= 10;
    }
}

void taban_degistir(int sayi_tabani, int sayi, int istenilen_taban, int *sonuc) {
    int onluk;
    onluk_tabana_donustur(sayi_tabani, sayi, &onluk);
    onluk_tabandan_donustur(istenilen_taban, onluk, sonuc);
}
