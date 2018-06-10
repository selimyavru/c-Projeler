#include <iostream>

using namespace std;

#define MAX 101

int main()
{
    char tablo[MAX][MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> tablo[i][j];
        }
    }

    int x_puan = 0, yeni_x_puan, k, l;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (tablo[i][j] != 'X')
                continue;

            // satir kontrolu
            k = j;
            yeni_x_puan = 0;
            while (tablo[i][k] == 'X' && k < n) {
                ++k; ++yeni_x_puan;
            }
            if (yeni_x_puan > x_puan)
                x_puan = yeni_x_puan;

            // sutun kontrolu
            k = i;
            yeni_x_puan = 0;
            while (tablo[k][j] == 'X' && k < n) {
                ++k; ++yeni_x_puan;
            }
            if (yeni_x_puan > x_puan)
                x_puan = yeni_x_puan;

            // sag-alt kontrol
            k = i;
            l = j;
            yeni_x_puan = 0;
            while (tablo[k][l] == 'X' && k < n && l < n) {
                ++k; ++l; ++yeni_x_puan;
            }
            if (yeni_x_puan > x_puan)
                x_puan = yeni_x_puan;

            // sag-ust kontrol
            k = i;
            l = j;
            yeni_x_puan = 0;
            while (tablo[k][l] == 'X' && k < n && l >= 0) {
                ++k; --l; ++yeni_x_puan;
            }
            if (yeni_x_puan > x_puan)
                x_puan = yeni_x_puan;
        }
    }

    cout << x_puan;

    return 0;
}
