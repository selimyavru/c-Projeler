#include <iostream>

using namespace std;

//----------------------------------------
// bilgisayar yapisini bu araya yaz
struct bilgisayar {
    char marka[10];
    char model[10];
    char islemci_model[10];
    double islemci_hizi;
    int ram_kapasite;
    int hdd_kapasite;
};
//----------------------------------------


//----------------------------------------
// bilgileri_al fonksiyonunu bu araya yaz
void bilgileri_al(struct bilgisayar *x) {
    cout << "Bilgileri giriniz:" << endl;
    cout << "Marka: ";
    cin >> x->marka;
    cout << "Model: ";
    cin >> x->model;
    cout << "Islemci model: ";
    cin >> x->islemci_model;
    cout << "Islemci hizi: ";
    cin >> x->islemci_hizi;
    cout << "RAM kapasitesi: ";
    cin >> x->ram_kapasite;
    cout << "HDD kapasitesi: ";
    cin >> x->hdd_kapasite;
}
//----------------------------------------


//----------------------------------------
// bilgileri_yaz fonksiyonunu bu araya yaz
void bilgileri_yaz(struct bilgisayar *x) {
    cout << "Bilgisayarin bilgileri:" << endl;
    cout << "Marka: " << x->marka << endl;
    cout << "Model: " << x->model << endl;
    cout << "Islemci model: " << x->islemci_model << endl;
    cout << "Islemci hizi: " << x->islemci_hizi << endl;
    cout << "RAM kapasitesi: " << x->ram_kapasite << endl;
    cout << "HDD kapasitesi: " << x->hdd_kapasite << endl;
}
//----------------------------------------

int main()
{
    struct bilgisayar a;
    bilgileri_al(&a);
    bilgileri_yaz(&a);
    return 0;
}
