**BU SORUDA YAZACAGINIZ KODU ONCELIKLE ASAGIDAKI ILK KODU __main.cpp__ DOSYANIZA KOPYALA YAPISTIR YAPARAK UZERINDE ISTENILEN YERLERE EKLEMELISINIZ. ORJINAL KOD UZERINDE DEGISIKLIK YAPAMAZSINIZ. ORJINAL KOD UZERINDE DEGISIKLIK YAPTIGI TESPIT EDILEN KISILER TOU JUDGE'IN VERDIGI PUANA BAKILMAKSIZIN BU SORUDAN DOGRUDAN SIFIR ALIRLAR.**  

```cpp
// SORU #7 FIYAT PERFORMANS
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
    struct cep_telefonu cepler[MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> cepler[i].marka >> cepler[i].model >> cepler[i].isletim_sistemi;
        cin >> cepler[i].dahili_bellek >> cepler[i].islemci_hizi;
        cin >> cepler[i].kalite >> cepler[i].tasarim >> cepler[i].fiyat;
    }
    puan_hesapla(cepler, n);
    puana_gore_sirala(cepler, n);
    cout << "Telefonlar:" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; ++i) {
        cout << cepler[i].puan << " " << cepler[i].marka << " " << cepler[i].model << endl;
    }
    return 0;
}
```