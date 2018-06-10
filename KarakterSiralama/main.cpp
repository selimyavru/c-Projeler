#include <iostream>

using namespace std;

#define MAX 1000

void degistir(char *c1, char *c2) {
    char tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;
}

int main()
{
    int n;
    char karakterler[MAX];

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> karakterler[i];
    }
    karakterler[n] = '\0';

    char c1, c2;
    for (int i = n; i > 0; --i) {
        for (int j = 1; j < i; ++j) {
            c1 = karakterler[j - 1];
            if (c1 >= 'A' && c1 <= 'Z')
                c1 += 32;
            c2 = karakterler[j];
            if (c2 >= 'A' && c2 <= 'Z')
                c2 += 32;
            if (c1 > c2)
                degistir(&karakterler[j - 1], &karakterler[j]);
        }
    }

    cout << karakterler;

    return 0;
}
