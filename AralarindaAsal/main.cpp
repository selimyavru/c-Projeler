void aralarinda_asal_mi(int sayi_1, int sayi_2, bool *sonuc) {
    // kucuk sayiyi bul
    int kucuk_sayi = sayi_1;
    if (sayi_2 < kucuk_sayi) kucuk_sayi = sayi_2;

    // sayi_1 ve sayi_2 aralarinda asal kabul edelim
    *sonuc = 1;

    // kucuk sayiya kadar olan sayilari kalansiz bolme icin dene
    for (int i = 2; i < kucuk_sayi; ++i) {
        // bir tane ortak bolen olmasi o iki sayinin aralarinda asal olmadigi demektir
        if (sayi_1 % i == 0 && sayi_2 % i == 0) {
            *sonuc = 0;
            return;
        }
    }
}
