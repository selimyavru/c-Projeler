#include <iostream>

using namespace std;

struct dijital_saat {
    int saat;
    int dakika;
    int saniye;
};

void saat_yaz(struct dijital_saat *diji) {
    cout << (diji->saat < 10 ? "0" : "");
    cout << diji->saat << ":";
    cout << (diji->dakika < 10 ? "0" : "");
    cout << diji->dakika << ":";
    cout << (diji->saniye < 10 ? "0" : "");
    cout << diji->saniye << endl;
}

void saat_ekle(struct dijital_saat *diji, int saat) {
    diji->saat += saat;
    diji->saat %= 24;
}

void dakika_ekle(struct dijital_saat *diji, int dakika) {
    diji->dakika += dakika;
    int saat = diji->dakika / 60;
    diji->dakika %= 60;
    saat_ekle(diji, saat);
}

void saniye_ekle(struct dijital_saat *diji, int saniye) {
    diji->saniye += saniye;
    int dakika = diji->saniye / 60;
    diji->saniye %= 60;
    dakika_ekle(diji, dakika);
}

int main()
{
    struct dijital_saat d;
    int saat, dakika, saniye;
    char x;
    cin >> d.saat >> x >> d.dakika >> x >> d.saniye;
    cin >> saat >> dakika >> saniye;
    saat_ekle(&d, saat);
    dakika_ekle(&d, dakika);
    saniye_ekle(&d, saniye);
    saat_yaz(&d);
    return 0;
}
