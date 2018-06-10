#include <iostream>

using namespace std;

bool kelime_ekle(char *paragraf, char *eklenecek_kelime, int eklenecek_yer);

int main()
{
    char paragraf[10000];
    char kelime[100];
    int indis;
    cin.getline(paragraf, 10000);
    cin >> indis;
    cin >> kelime;

    if (kelime_ekle(paragraf, kelime, indis)) {
        cout << paragraf;
    } else {
        cout << -1;
    }

    return 0;
}

bool kelime_ekle(char *paragraf, char *eklenecek_kelime, int eklenecek_yer) {
    int uzunluk;
    for (uzunluk = 0; paragraf[uzunluk] != '\0'; ++uzunluk);

    int kelime_uzunluk;
    for (kelime_uzunluk = 0; eklenecek_kelime[kelime_uzunluk] != '\0'; ++kelime_uzunluk);

    if (eklenecek_yer < 0 || eklenecek_yer > uzunluk) {
        cout << -1;
        return false;
    }

    for (int i = uzunluk; i >= eklenecek_yer; --i) {
        paragraf[i + kelime_uzunluk] = paragraf[i];
    }

    for (int i = eklenecek_yer; i < kelime_uzunluk + eklenecek_yer; ++i) {
        paragraf[i] = eklenecek_kelime[i - eklenecek_yer];
    }

    return true;
}
