#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int arap, uzunluk, carpan;
    char roma[100];
    int deger[100];

    cin >> roma;

    uzunluk = strlen(roma);
    for (int i = 0; i < uzunluk; ++i) {
        switch (roma[i]) {
        case 'I':
            deger[i] = 1;
            break;
        case 'V':
            deger[i] = 5;
            break;
        case 'X':
            deger[i] = 10;
            break;
        case 'L':
            deger[i] = 50;
            break;
        case 'C':
            deger[i] = 100;
            break;
        case 'D':
            deger[i] = 500;
            break;
        case 'M':
            deger[i] = 1000;
            break;
        default:
            deger[i] = 0;
            break;
        }
    }

    arap = deger[uzunluk-1];
    for (int i = uzunluk-2; i >= 0; --i) {
        carpan = 1;
        for (int j = i+1; j < uzunluk; ++j) {
            if (deger[i] < deger[j]) {
                carpan = -1;
                break;
            }
        }
        arap += carpan * deger[i];
    }

    cout << arap;

    return 0;
}
