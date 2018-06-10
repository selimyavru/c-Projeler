// SORU #6 DIJITAL SAAT
#include <iostream>

using namespace std;

//  ----------------------------------
//  | yazmaniz gereken yapilari ve   |
//  | fonksiyonlari bu araya yaziniz |
//  ----------------------------------

// main fonksiyonu kesinlikle degistirmeyiniz
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
