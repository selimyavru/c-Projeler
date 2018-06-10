#include <iostream>

using namespace std;

#define MAX 101

int main()
{
    int tablo[MAX][MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> tablo[i][j];
        }
    }

    int max_ardisik = 0, yeni_max_ardisik, k, l, x;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            // satir artan
            x = tablo[i][j];
            k = j;
            yeni_max_ardisik = 0;
            while (tablo[i][k] == x && k < n) {
                ++x; ++k; ++yeni_max_ardisik;
            }
            if (yeni_max_ardisik > max_ardisik)
                max_ardisik = yeni_max_ardisik;

            // satir azalan
            x = tablo[i][j];
            k = j;
            yeni_max_ardisik = 0;
            while (tablo[i][k] == x && k < n) {
                --x; ++k; ++yeni_max_ardisik;
            }
            if (yeni_max_ardisik > max_ardisik)
                max_ardisik = yeni_max_ardisik;

            // sutun artan
            x = tablo[i][j];
            k = i;
            yeni_max_ardisik = 0;
            while (tablo[k][j] == x && k < n) {
                ++x; ++k; ++yeni_max_ardisik;
            }
            if (yeni_max_ardisik > max_ardisik)
                max_ardisik = yeni_max_ardisik;

            // sutun azalan
            x = tablo[i][j];
            k = i;
            yeni_max_ardisik = 0;
            while (tablo[k][j] == x && k < n) {
                --x; ++k; ++yeni_max_ardisik;
            }
            if (yeni_max_ardisik > max_ardisik)
                max_ardisik = yeni_max_ardisik;

            // sag-alt artan
            x = tablo[i][j];
            k = i;
            l = j;
            yeni_max_ardisik = 0;
            while (tablo[k][l] == x && k < n && l < n) {
                ++x; ++k; ++l; ++yeni_max_ardisik;
            }
            if (yeni_max_ardisik > max_ardisik)
                max_ardisik = yeni_max_ardisik;

            // sag-alt azalan
            x = tablo[i][j];
            k = i;
            l = j;
            yeni_max_ardisik = 0;
            while (tablo[k][l] == x && k < n && l < n) {
                --x; ++k; ++l; ++yeni_max_ardisik;
            }
            if (yeni_max_ardisik > max_ardisik)
                max_ardisik = yeni_max_ardisik;

            // sag-ust artan
            x = tablo[i][j];
            k = i;
            l = j;
            yeni_max_ardisik = 0;
            while (tablo[k][l] == x && k < n && l >= 0) {
                ++x; ++k; --l; ++yeni_max_ardisik;
            }
            if (yeni_max_ardisik > max_ardisik)
                max_ardisik = yeni_max_ardisik;

            // sag-ust azalan
            x = tablo[i][j];
            k = i;
            l = j;
            yeni_max_ardisik = 0;
            while (tablo[k][l] == x && k < n && l >= 0) {
                --x; ++k; --l; ++yeni_max_ardisik;
            }
            if (yeni_max_ardisik > max_ardisik)
                max_ardisik = yeni_max_ardisik;
        }
    }

    cout << max_ardisik;

    return 0;
}
