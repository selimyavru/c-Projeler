#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // en ust
    cout << "*";
    for (int i = 0; i < n-2; ++i) {
        cout << " ";
    }
    cout << "*" << endl;

    // ust orta
    for (int j = 0; j < n/2-1; ++j) {
        cout << "*";
        for (int i = 0; i < j; ++i) {
            cout << " ";
        }
        cout << "*";
        for (int i = 0; i < n-(j+2)*2; ++i) {
            cout << " ";
        }
        cout << "*";
        for (int i = 0; i < j; ++i) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // orta kisim
    cout << "*";
    for (int i = 0; i < n/2-1; ++i) {
        cout << " ";
    }
    cout << "*";
    for (int i = 0; i < n/2-1; ++i) {
        cout << " ";
    }
    cout << "*" << endl;

    // alt kisim
    for (int j = 0; j < n/2; ++j) {
        cout << "*";
        for (int i = 0; i < n - 2; ++i) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    return 0;
}
