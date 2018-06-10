#include <iostream>
#include <cstring>

using namespace std;

#define MAX 100

int main()
{
    int n, m, son_uzunluk;
    char cumle[MAX][MAX];

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> cumle[i];
    }

    son_uzunluk = strlen(cumle[n-1]);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j < n - 1 || i < son_uzunluk)
                cout << cumle[j][i];
        }
        cout << " ";
    }

    return 0;
}
