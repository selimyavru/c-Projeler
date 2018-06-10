#include <iostream>

using namespace std;

#define MAX 10000
#define MAX_SAYISI 2

void kaydir(int indis, int *maxlar)
{
    for (int k = MAX_SAYISI - 1; k > indis; --k) {
        maxlar[k] = maxlar[k - 1];
    }
}

int main()
{
    int n, sayilar[MAX], maxlar[MAX_SAYISI] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> sayilar[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < MAX_SAYISI; ++j) {
            if (sayilar[i] >= maxlar[j]) {
                kaydir(j, maxlar);
                maxlar[j] = sayilar[i];
                break;
            }
        }
    }

    for (int i = 0; i < MAX_SAYISI; ++i) {
        cout << maxlar[i] << " ";
    }

    return 0;
}
