// SORU #4 KISI SIRALAMA
#include <iostream>
#include <cstring>

using namespace std;

#define MAX 1000

//  ----------------------------------
//  | yazmaniz gereken yapilari ve   |
//  | fonksiyonlari bu araya yaziniz |
//  ----------------------------------

// main fonksiyonu kesinlikle degistirmeyiniz
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

