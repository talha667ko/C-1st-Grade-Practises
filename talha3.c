
#include <stdio.h>

//667 printf and scanf exercices from the book

int main()
{


    int yaricap =0;
    int yukseklik =0;
    double pi = 3.1416;
    double hacim;
    double A =0;

    printf("Dairesel koni hacim hesaplamasi.");
    printf("\nYukseklik giriniz : ");
    scanf("%d", &yukseklik);
    printf("Yaricapi giriniz : ");
    scanf("%d", &yaricap);
    printf("\n\nGirdi degerleri: yukseklik %d ve yaricap %d ", yukseklik, yaricap);

    A = pi*yaricap*yaricap;

    hacim = (A*yukseklik)/3.0;
    printf("%lf", hacim);
    printf("\n\nDairesel koninin hacmi : %.2lf cm kuptur.", hacim);

    return 0;
}
