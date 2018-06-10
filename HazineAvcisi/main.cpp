#include <iostream>

using namespace std;

#define MAX 10

int main()
{
    int saray[MAX][MAX], n, satir, sutun, ipucu, yeni_ipucu;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> saray[i][j];
        }
    }

    yeni_ipucu = 11;
    do {
        ipucu = yeni_ipucu;
        cout << ipucu << " ";
        satir = ipucu / 10;
        sutun = ipucu % 10;
        yeni_ipucu = saray[satir - 1][sutun - 1];
    } while (ipucu != yeni_ipucu);

    return 0;
}
