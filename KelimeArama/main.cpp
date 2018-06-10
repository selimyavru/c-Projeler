#include <iostream>

using namespace std;

int main()
{
    char paragraf[10000];
    char aranan[100];
    cin.getline(paragraf, 10000);
    cin >> aranan;

    int paragraf_uzunluk, aranan_uzunluk;
    for (paragraf_uzunluk = 0; paragraf[paragraf_uzunluk] != '\0'; ++paragraf_uzunluk);
    for (aranan_uzunluk = 0; aranan[aranan_uzunluk] != '\0'; ++aranan_uzunluk);

    for (int i = 0; i <= (paragraf_uzunluk - aranan_uzunluk); ++i) {
        bool bulundu = true;
        for (int j = 0; j < aranan_uzunluk; ++j) {
            char a = paragraf[i + j];
            if (a <= 90)
                a += 32;
            char b = aranan[j];
            if (b <= 90)
                b += 32;
            if (a != b) {
                bulundu = false;
                break;
            }
        }
        if (bulundu) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
