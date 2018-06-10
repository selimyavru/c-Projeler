#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

#define MAX 1000

struct ogrenci {
    char ad[10];
    char soyad[10];
    double quiz_notu;
    double vize_notu;
    double final_notu;
    double ortalama;
    char harf_notu[3];
};

void ortalama_hesapla(struct ogrenci *ogrler, int n) {
    for (int i = 0; i < n; ++i) {
        ogrler[i].ortalama = ogrler[i].quiz_notu * 0.2 + ogrler[i].vize_notu * 0.3 + ogrler[i].final_notu * 0.5;
    }
}

void harf_notu_hesapla(struct ogrenci *ogrler, int n) {
    for (int i = 0; i < n; ++i) {
        if (ogrler[i].ortalama >= 90) {
            strncpy(ogrler[i].harf_notu, "AA", 3);
        } else if (ogrler[i].ortalama >= 80) {
            strncpy(ogrler[i].harf_notu, "BA", 3);
        } else if (ogrler[i].ortalama >= 70) {
            strncpy(ogrler[i].harf_notu, "BB", 3);
        } else if (ogrler[i].ortalama >= 60) {
            strncpy(ogrler[i].harf_notu, "CB", 3);
        } else if (ogrler[i].ortalama >= 50) {
            strncpy(ogrler[i].harf_notu, "CC", 3);
        } else if (ogrler[i].ortalama >= 40) {
            strncpy(ogrler[i].harf_notu, "DC", 3);
        } else if (ogrler[i].ortalama >= 30) {
            strncpy(ogrler[i].harf_notu, "DD", 3);
        } else {
            strncpy(ogrler[i].harf_notu, "FF", 3);
        }
    }
}

void ortalamaya_gore_sirala(struct ogrenci *ogrler, int n) {
    struct ogrenci tmp;
    int ort1, ort2;
    for (int i = n - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            ort1 = ogrler[j].ortalama * 100;
            ort2 = ogrler[j+1].ortalama * 100;
            if (ort1 < ort2) {
                tmp = ogrler[j];
                ogrler[j] = ogrler[j+1];
                ogrler[j+1] = tmp;
            }
        }
    }
}

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
