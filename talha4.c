//
//  main.c
//  dene
//
//  Created by Talha KORKMAZ on 05/11/2023.
//667

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    -EXERCISE 6.8
//    int sayi1;
//    int sayi2;
//    printf("Lutfen birinci sayiyi giriniz: ");
//    scanf("%d", &sayi1);
//    printf("Lutfen ikinci sayiyi giriniz: ");
//    scanf("%d", &sayi2);
//    printf("---------------------------------");
//    printf("\nGirilen %d ve %d sayilarinin toplami %d dir.\n", sayi1, sayi2, sayi1+sayi2);
    
//    -EXERCISE 6.9
//    int yaricap;
//    int aci;
//    float pi= 3.14;
//    printf("Yaricap degerini giriniz: ");
//    scanf("%d", &yaricap);
//    printf("Merkez aci degerini giriniz: ");
//    scanf("%d", &aci);
//    printf("\nAcinin taradigi alan %.2f santimetrekaredir\n", pi*yaricap*yaricap*aci/360);
//    
    
//    -EXERCISE 6.10
//    float lt;
//    float TL;
//    int km;
//    int maliyet;
//    printf("Km basina yakit tuketimi (lt)   ");
//    scanf("%f", &lt);
//    printf("1 lt yakitin fiyati (TL)   ");
//    scanf("%f", &TL);
//    printf("Aricin katettigi toplam yol (km)   ");
//    scanf("%d", &km);
//    maliyet = lt*TL*km;
//    printf("\nToplam yakit maliyeti %8.d\n", maliyet);
    
//    -EXERCISE 6.11
//    int cap;
//    float perimeter;
//    float pi = 3.14;
//    printf("Cemberin capini giriniz: ");
//    scanf("%d", &cap);
//    perimeter = cap*pi;
//    printf("\nCemberin uzunlugu: %.f\n", perimeter);
    
//    -EXERCISE 6.12
//    float mil;
//    float km;
//    printf("Mil olarak uzakligi giriniz: ");
//    scanf("%f", &mil);
//    km = mil*1.609;
//    printf("\nGirilen %.2f mil, %.2f km dir.\n", mil, km);
    
//    -EXERCISE 6.15
//    int dogum;
//    int simdi;
//    printf("Dogum yilinizi giriniz: ");
//    scanf("%d", &dogum);
//    printf("Gunumuz yilini giriniz: ");
//    scanf("%d", &simdi);
//    printf("\nYasiniz: %d\n", simdi-dogum);
      
//    -EXERCISE 6.16
//    float tamsayiA;
//    float tamsayiB;
//    printf("Harmonik ortalama alincak degerler? : ");
//    scanf("%f %f", &tamsayiA, &tamsayiB);
//    printf("\nHarmonik ortalama = %.2f\n", (2*tamsayiA*tamsayiB)/(tamsayiA+tamsayiB));
    
//    -EXERCISE 6.17 ***
//    int sure;
//    int saat;
//    int dakika;
//    int saniye;
//    printf("Sureyi giriniz (Saniye olarak): ");
//    scanf("%d", &sure);
//    saat = sure/3600;
//    dakika = (sure%3600)/60;
//    saniye = (sure%3600)%60;
//    printf("\nBu sure %d saat, %d dakika, %d saniye.\n", saat, dakika, saniye);
    
//  -EXERCİSE 6.19
//    int toplamTutar;
//    int KdvOrani;
//    int KDV;
//    int bedel;
//    printf("Kdv dahhil toplam tutari giriniz (TL): ");
//    scanf("%d", &toplamTutar);
//    printf("Kdv oranini giriniz %: ");
//    scanf("%d", &KdvOrani);
//    bedel = toplamTutar/KdvOrani-1;
//    KDV = toplamTutar-bedel;
//    printf("\nHesaplanan Kdv miktari: %d", KDV);
//    printf("\nKdv haric mal hizmet bedeli: %d", bedel);

//  -EXERCİSE 6.24
//      float pay1;
//      float pay2;
//      float payda1;
//      float payda2;
//      printf("Birinci ifadenin pay ve paydasini giriniz: ");
//      scanf("%f %f", &pay1, &payda1);
//      printf("İkinci ifadenin pay ve paydasini giriniz: ");
//      scanf("%f %f", &pay2, &payda2);
//      printf("\nCarpimi = %.2f", pay1/payda1*pay2/payda2);
//      printf("\nToplami = %.2f", (pay1/payda1)+(pay2/payda2));

//    -EXERCİSE 6.25 not done***
//      int saat;
//      int dakika;
//      int saniye;
//      int EklemeSN;
//      printf("Zamani giriniz (saat, dakika, saniye) = ");
//      scanf("%d %d %d", &saat, &dakika, &saniye);
//      printf("Eklenecek sureyi giriniz (saniye): ");
//      scanf("%d", &EklemeSN);
//      saat = saat+(EklemeSN/3600);
//      dakika = dakika+((EklemeSN%3600)/60);
//      saniye = (saniye+((EklemeSN%3600)%60))%60;
//      printf("Yeni zaman = %d %d %d", saat, dakika, saniye);

//     -EXERCİSE 6.26
       int para10;
       int para100;
       int kurus10;
       int kurus25;
       int lira;
       float ToplamKurus;
       printf("Elinizdeki 10 Para miktarini giriniz: ");
       scanf("%d", &para10);
       printf("Elinizdeki 100 Para miktarini giriniz: ");
       scanf("%d", &para100);
       printf("Elinizdeki 10 Kurus miktarini giriniz: ");
       scanf("%d", &kurus10);
       printf("Elinizdeki 25 Kurus miktarini giriniz: ");
       scanf("%d", &kurus25);
       ToplamKurus = 
       
       
       printf("\nBozukluklarin toplam degeri %d lira %.2f kurus eder.\n");
    
    
    
    return 0;
}
