#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int n2 = n/2;

    for (int i = 0; i < n; ++i) {
        cout << "*";
    }
    cout << endl;

    cout << "*";
    for (int j = n2 - 1; j > 0; --j) {
        cout << " ";
    }
    cout << "*";
    for (int j = n2 - 1; j > 0; --j) {
        cout << " ";
    }
    cout << "*" << endl;

    for (int i = 1; i < n2; ++i) {
        cout << "*";
        for (int j = n2 - 1; j > i; --j) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < (i-1)*2 + 1; ++j) {
            cout << " ";
        }
        cout << "*";
        for (int j = n2 - 1; j > i; --j) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = n2 - 2; i > 0; --i) {
        cout << "*";
        for (int j = n2 - 1; j > i; --j) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < (i-1)*2 + 1; ++j) {
            cout << " ";
        }
        cout << "*";
        for (int j = n2 - 1; j > i; --j) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    cout << "*";
    for (int j = n2 - 1; j > 0; --j) {
        cout << " ";
    }
    cout << "*";
    for (int j = n2 - 1; j > 0; --j) {
        cout << " ";
    }
    cout << "*" << endl;

    for (int i = 0; i < n; ++i) {
        cout << "*";
    }
    cout << endl;
    return 0;
}
