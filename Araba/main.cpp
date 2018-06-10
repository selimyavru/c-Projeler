#include <iostream>

using namespace std;

//----------------------------------------
// araba yapisini bu araya yaz
struct araba {
    char marka[10];
    char model[10];
    int model_yili;
    double motor_hacmi;
    char yakit_turu[10];
};
//----------------------------------------


//----------------------------------------
// bilgileri_al fonksiyonunu bu araya yaz
void bilgileri_al(struct araba *x) {
    cout << "Bilgileri giriniz:" << endl;
    cout << "Marka: ";
    cin >> x->marka;
    cout << "Model: ";
    cin >> x->model;
    cout << "Model yili: ";
    cin >> x->model_yili;
    cout << "Motor hacmi: ";
    cin >> x->motor_hacmi;
    cout << "Yakit turu: ";
    cin >> x->yakit_turu;
}
//----------------------------------------


//----------------------------------------
// bilgileri_yaz fonksiyonunu bu araya yaz
void bilgileri_yaz(struct araba *x) {
    cout << "Aracin bilgileri:" << endl;
    cout << "Marka: " << x->marka << endl;
    cout << "Model: " << x->model << endl;
    cout << "Model yili: " << x->model_yili << endl;
    cout << "Motor hacmi: " << x->motor_hacmi << endl;
    cout << "Yakit turu: " << x->yakit_turu << endl;
}
//----------------------------------------

int main()
{
    struct araba a;
    bilgileri_al(&a);
    bilgileri_yaz(&a);
    return 0;
}
