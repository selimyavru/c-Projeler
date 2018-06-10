#include <iostream>

using namespace std;

//----------------------------------------
// cep_telefonu yapisini bu araya yaz
struct cep_telefonu {
    char marka[10];
    char model[10];
    char isletim_sistemi[10];
    char ekran_boyutu[10];
    int dahili_bellek;
    char kamera_cozunurluk[10];
    char ekran_cozunurluk[10];
};
//----------------------------------------


//----------------------------------------
// bilgileri_al fonksiyonunu bu araya yaz
void bilgileri_al(struct cep_telefonu *x) {
    cout << "Bilgileri giriniz:" << endl;
    cout << "Marka: ";
    cin >> x->marka;
    cout << "Model: ";
    cin >> x->model;
    cout << "Isletim sistemi: ";
    cin >> x->isletim_sistemi;
    cout << "Ekran boyutu: ";
    cin >> x->ekran_boyutu;
    cout << "Dahili bellek: ";
    cin >> x->dahili_bellek;
    cout << "Kamera cozunurlugu: ";
    cin >> x->kamera_cozunurluk;
    cout << "Ekran cozunurlugu: ";
    cin >> x->ekran_cozunurluk;
}
//----------------------------------------


//----------------------------------------
// bilgileri_yaz fonksiyonunu bu araya yaz
void bilgileri_yaz(struct cep_telefonu *x) {
    cout << "Cep telefonunun bilgileri:" << endl;
    cout << "Marka: " << x->marka << endl;
    cout << "Model: " << x->model << endl;
    cout << "Isletim sistemi: " << x->isletim_sistemi << endl;
    cout << "Ekran boyutu: " << x->ekran_boyutu << endl;
    cout << "Dahili bellek: " << x->dahili_bellek << endl;
    cout << "Kamera cozunurlugu: " << x->kamera_cozunurluk << endl;
    cout << "Ekran cozunurlugu: " << x->ekran_cozunurluk << endl;
}
//----------------------------------------

int main()
{
    struct cep_telefonu a;
    bilgileri_al(&a);
    bilgileri_yaz(&a);
    return 0;
}
