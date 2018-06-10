**BU SORUDA YAZACAGINIZ KODU ONCELIKLE ASAGIDAKI ILK KODU __main.cpp__ DOSYANIZA KOPYALA YAPISTIR YAPARAK UZERINDE ISTENILEN YERLERE EKLEMELISINIZ. ORJINAL KOD UZERINDE DEGISIKLIK YAPAMAZSINIZ. ORJINAL KOD UZERINDE DEGISIKLIK YAPTIGI TESPIT EDILEN KISILER TOU JUDGE'IN VERDIGI PUANA BAKILMAKSIZIN BU SORUDAN DOGRUDAN SIFIR ALIRLAR.**  

```cpp
// SORU #8 RIEMANN TOPLAMI
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//  ----------------------------------
//  | yazmaniz gereken yapilari ve   |
//  | fonksiyonlari bu araya yaziniz |
//  ----------------------------------

// main fonksiyonu kesinlikle degistirmeyiniz
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
```