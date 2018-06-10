#include <iostream>

using namespace std;

int main()
{
    int n, n2;
    cin >> n;
    n2 = n / 2;
    for (int i = n2; i > 0; --i) {
        cout << "*";
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    cout << "*" << endl;
    for (int i = 1; i <= n2; ++i) {
        cout << "*";
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    return 0;
}
