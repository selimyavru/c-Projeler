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
