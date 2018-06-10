#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char kelimeler[1000][100];
    char tmp[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> kelimeler[i];
    }

    for (int i = n - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (strcmp(kelimeler[j], kelimeler[j+1]) > 0) {
                strncpy(tmp, kelimeler[j], 100);
                strncpy(kelimeler[j], kelimeler[j+1], 100);
                strncpy(kelimeler[j+1], tmp, 100);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << kelimeler[i] << endl;
    }

    return 0;
}
