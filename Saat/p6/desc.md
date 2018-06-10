**BU SORUDA YAZACAGINIZ KODU ONCELIKLE ASAGIDAKI ILK KODU __main.cpp__ DOSYANIZA KOPYALA YAPISTIR YAPARAK UZERINDE ISTENILEN YERLERE EKLEMELISINIZ. ORJINAL KOD UZERINDE DEGISIKLIK YAPAMAZSINIZ. ORJINAL KOD UZERINDE DEGISIKLIK YAPTIGI TESPIT EDILEN KISILER TOU JUDGE'IN VERDIGI PUANA BAKILMAKSIZIN BU SORUDAN DOGRUDAN SIFIR ALIRLAR.**  

```cpp
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
```