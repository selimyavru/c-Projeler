// SORU #5 OGRENCI NOTLANDIRMA
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

#define MAX 1000

//  ----------------------------------
//  | yazmaniz gereken yapilari ve   |
//  | fonksiyonlari bu araya yaziniz |
//  ----------------------------------

// main fonksiyonu kesinlikle degistirmeyiniz
int main()
{
    struct ogrenci ogrenciler[MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> ogrenciler[i].ad >> ogrenciler[i].soyad >> ogrenciler[i].quiz_notu;
        cin >> ogrenciler[i].vize_notu >> ogrenciler[i].final_notu;
    }
    ortalama_hesapla(ogrenciler, n);
    harf_notu_hesapla(ogrenciler, n);
    ortalamaya_gore_sirala(ogrenciler, n);
    cout << "Ogrenciler:" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; ++i) {
        cout << ogrenciler[i].ad << " " << ogrenciler[i].soyad << " ";
        cout << ogrenciler[i].ortalama << " " << ogrenciler[i].harf_notu << endl;
    }
    return 0;
}


