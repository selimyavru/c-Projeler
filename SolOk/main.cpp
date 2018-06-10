#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2*n-1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == n-1) {
                cout << "* ";
            } else if (i+j == n-1) {
                cout << "* ";
            } else if (i-n+1 == j) {
                cout << "* ";
            } else if (i >= n/2 && i < 3*n/2 && j == n/2) {
                cout << "* ";
            } else if (i >= n/2 && i < 3*n/2 && i == j) {
                cout << "* ";
            } else if (i >= n/2 && i < 3*n/2 && i+j == 2*n-2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
