#include <iostream>

using namespace std;

#define MAX 101

int main()
{
    int mat1[MAX][MAX];
    int mat2[MAX][MAX];
    int carpim[MAX][MAX];
    int n1, m1, n2, m2, n3, m3;

    // matris boyutlarini al
    cin >> n1 >> m1 >> n2 >> m2;

    // mat1 al
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < m1; ++j) {
            cin >> mat1[i][j];
        }
    }

    // mat2 al
    for (int i = 0; i < n2; ++i) {
        for (int j = 0; j < m2; ++j) {
            cin >> mat2[i][j];
        }
    }

    // carpilabiliyor mu?
    if (m1 != n2) {
        cout << -1;
        return 0;
    }

    // carpim hesapla
    n3 = n1;
    m3 = m2;
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < m2; ++j) {
            int tmp = 0;
            for (int k = 0; k < m1; ++k) {
                tmp += mat1[i][k] * mat2[k][j];
            }
            carpim[i][j] = tmp;
        }
    }

    // carpim yazdir
    for (int i = 0; i < n3; ++i) {
        for (int j = 0; j < m3; ++j) {
            cout << carpim[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
