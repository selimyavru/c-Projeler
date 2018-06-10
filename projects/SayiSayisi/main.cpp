#include <iostream>

using namespace std;

#define MAX 1000

int main()
{
    int sayilar[MAX];
    int sorular[MAX];
    int x = 0, indis, sayi, indis2;
    for (indis = 0; x != -1; ++indis) {
        cin >> x;
        sayilar[indis] = x;
    }
    x = 0;
    for (indis = 0; x != -1; ++indis) {
        cin >> x;
        sorular[indis] = x;
    }
    for (indis = 0; sorular[indis] != -1; ++indis) {
        sayi = 0;
        for (indis2 = 0; sayilar[indis2] != -1; ++indis2) {
            if (sorular[indis] == sayilar[indis2])
                ++sayi;
        }
        cout << sayi << " ";
    }

    return 0;
}
