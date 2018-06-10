**BU SORUDA YAZACAGINIZ KODU ONCELIKLE ASAGIDAKI ILK KODU __main.cpp__ DOSYANIZA KOPYALA YAPISTIR YAPARAK UZERINDE ISTENILEN YERLERE EKLEMELISINIZ. ORJINAL KOD UZERINDE DEGISIKLIK YAPAMAZSINIZ. ORJINAL KOD UZERINDE DEGISIKLIK YAPTIGI TESPIT EDILEN KISILER TOU JUDGE'IN VERDIGI PUANA BAKILMAKSIZIN BU SORUDAN DOGRUDAN SIFIR ALIRLAR.**  

```cpp
// SORU #3 UCGEN
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
    struct ucgen u;
    bilgileri_al(&u);
    cout << fixed << setprecision(2);
    cout << cevre_hesapla(&u) << endl;
    cout << alan_hesapla(&u) << endl;
    return 0;
}
```