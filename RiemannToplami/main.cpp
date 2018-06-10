#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct denklem {
    double a, b, c, d;
};

void fonksiyon_yaz(struct denklem *d) {
    cout << "y = " << d->a << "x^3";
    cout << (d->b < 0 ? "-" : "+") << abs(d->b) << "x^2";
    cout << (d->c < 0 ? "-" : "+") << abs(d->c) << "x";
    cout << (d->d < 0 ? "-" : "+") << abs(d->d) << endl;
}

double fonksiyon_hesapla(struct denklem *d, double x) {
    return d->a*x*x*x + d->b*x*x + d->c*x + d->d;
}

double riemann_hesapla(struct denklem *d, double a, double b, int n) {
    double x, y, toplam = 0, dx = (b-a)/n;
    for (int i = 0; i < n; ++i) {
        x = a + i*dx + dx/2;
        y = fonksiyon_hesapla(d, x);
        toplam += y*dx;
    }
    return toplam;
}

int main()
{
    struct denklem f;
    double ilk_deger, son_deger;
    int dikdortgen_sayisi;

    // virgulden sonraki basamak sayisini 1 olarak ayarla
    cout << fixed << setprecision(1);

    // fonksiyonu al
    cout << "Denklem katsayilarini giriniz:" << endl;
    cin >> f.a >> f.b >> f.c >> f.d;

    // fonksiyonu yaz
    cout << "Girilen denklem: " << endl;
    fonksiyon_yaz(&f);

    // aralik degerlerini al
    cout << "Aralik degerlerini ve bolum sayisini giriniz:" << endl;
    cin >> ilk_deger >> son_deger >> dikdortgen_sayisi;

    // riemann toplamini hesapla ve yaz
    cout << "Riemann toplami: " << endl;
    cout << riemann_hesapla(&f, ilk_deger, son_deger, dikdortgen_sayisi);
    return 0;
}
