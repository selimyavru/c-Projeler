#include <iostream>
#include <cstring>

using namespace std;

#define MAX 1000

struct kisi {
    char ad[10];
    char soyad[10];
    int yas;
};

void ada_gore_sirala(struct kisi *kisiler, int n)
{
    struct kisi tmp;
    for (int i = n-1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (strncmp(kisiler[j].ad, kisiler[j+1].ad, 10) > 0) {
                tmp = kisiler[j];
                kisiler[j] = kisiler[j+1];
                kisiler[j+1] = tmp;
            }
        }
    }
}

void soyada_gore_sirala(struct kisi *kisiler, int n)
{
    struct kisi tmp;
    for (int i = n-1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (strncmp(kisiler[j].soyad, kisiler[j+1].soyad, 10) > 0) {
                tmp = kisiler[j];
                kisiler[j] = kisiler[j+1];
                kisiler[j+1] = tmp;
            }
        }
    }
}

void yasa_gore_sirala(struct kisi *kisiler, int n)
{
    struct kisi tmp;
    for (int i = n-1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (kisiler[j].yas > kisiler[j+1].yas) {
                tmp = kisiler[j];
                kisiler[j] = kisiler[j+1];
                kisiler[j+1] = tmp;
            }
        }
    }
}

int main()
{
    struct kisi kisiler[MAX];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> kisiler[i].ad >> kisiler[i].soyad >> kisiler[i].yas;
    switch (m) {
    case 0:
        ada_gore_sirala(kisiler, n);
        break;
    case 1:
        soyada_gore_sirala(kisiler, n);
        break;
    case 2:
        yasa_gore_sirala(kisiler, n);
        break;
    default:
        cout << "Yanlis siralama kriteri!"<<endl;
        break;
    }
    cout << "Kisiler:" << endl;
    for (int i = 0; i < n; ++i)
        cout << kisiler[i].ad << " " << kisiler[i].soyad << " " << kisiler[i].yas << endl;
    return 0;
}
