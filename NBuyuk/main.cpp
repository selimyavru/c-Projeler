#include <iostream>

using namespace std;

#define MAX 10000

void kaydir(int indis, int *maxlar, int n)
{
    for (int k = n - 1; k > indis; --k) {
        maxlar[k] = maxlar[k - 1];
    }
}

int main()
{
    int n, k, sayilar[MAX], maxlar[MAX] = {0};
    cin >> k >> n;
    for (int i = 0; i < k; ++i) {
        cin >> sayilar[i];
    }

    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k; ++j) {
            if (sayilar[i] >= maxlar[j]) {
                kaydir(j, maxlar, n);
                maxlar[j] = sayilar[i];
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << maxlar[i] << " ";
    }

    return 0;
}
