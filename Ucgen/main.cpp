#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// ucgen yapisini buraya yazin

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// bilgileri_al fonksiyonunu buraya yazin

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// cevre_hesapla fonksiyonunu buraya yazin

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// alan_hesapla fonksiyonunu buraya yazin

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int main()
{
    struct ucgen u;
    bilgileri_al(&u);
    cout << fixed << setprecision(2);
    cout << cevre_hesapla(&u) << endl;
    cout << alan_hesapla(&u) << endl;
    return 0;
}
