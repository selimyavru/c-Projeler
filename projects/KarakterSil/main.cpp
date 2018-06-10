#include <iostream>

using namespace std;

void karakter_sil(char *paragraf, char *silinecek_karakterler);

int main()
{
    char paragraf[10000];
    char silinecek_karakterler[100];
    cin.getline(paragraf, 10000);
    cin.getline(silinecek_karakterler, 100);
    karakter_sil(paragraf, silinecek_karakterler);
    cout << paragraf;

    return 0;
}

void karakter_sil(char *paragraf, char *silinecek_karakterler) {
    int indis = 0;
    for (int i = 0; paragraf[i] != '\0'; ++i) {
        paragraf[indis] = paragraf[i];
        bool sil = false;
        for (int j = 0; silinecek_karakterler[j] != '\0'; ++j) {
            char a = paragraf[i];
            if (a > 90)
                a -= 32;
            char b = silinecek_karakterler[j];
            if (b > 90)
                b -= 32;
            if (a == b) {
                sil = true;
                break;
            }
        }
        if (!sil) {
            ++indis;
        }
    }
    paragraf[indis] = '\0';
}
