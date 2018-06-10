#include <iostream>

using namespace std;

int main()
{
    char karakterler[10000];
    cin >> karakterler;

    int karakter_sayilari[26];
    for (int i = 0; i < 26; ++i) {
        karakter_sayilari[i] = 0;
    }
    for (int i = 0; karakterler[i] != '\0'; ++i) {
        char karakter = karakterler[i];
        int indis;
        if (karakter >= 'a') {
            indis = karakter - 'a';
        } else {
            indis = karakter - 'A';
        }
        ++karakter_sayilari[indis];
    }

    int max_sayi = -1, min_sayi = 10001;
    char max_char, min_char;
    for (int i = 0; i < 26; ++i) {
        if (karakter_sayilari[i] == 0)
            continue;
        if (karakter_sayilari[i] > max_sayi) {
            max_sayi = karakter_sayilari[i];
            max_char = i + 'A';
        }
        if (karakter_sayilari[i] < min_sayi) {
            min_sayi = karakter_sayilari[i];
            min_char = i + 'A';
        }
    }

    cout << "En fazla: " << max_char << " " << max_sayi << endl;
    cout << "En az: " << min_char << " " << min_sayi << endl;

    return 0;
}
