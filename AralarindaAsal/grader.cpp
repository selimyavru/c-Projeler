#include <iostream>

using namespace std;

void aralarinda_asal_mi(int sayi_1, int sayi_2, bool *sonuc);

int main()
{
    int a, b;
    bool cevap;
    cin >> a >> b;
    aralarinda_asal_mi(a, b, &cevap);
    cout << (cevap ? "Aralarinda asal" : "Aralarinda asal degil");
    return 0;
}

