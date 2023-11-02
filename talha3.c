
#include <stdio.h>

//667 printf and scanf exercices from the book

int main()
{


    double yaricap =0;
    double yukseklik =0;
    float pi = 3.1419;
    double hacim =0;
    double A =0;

    printf("Dairesel koni hacim hesaplamasi.");
    printf("\nYukseklik giriniz : ");
    scanf("%lf", &yukseklik);
    printf("Yaricapi giriniz : ");
    scanf("%lf", &yaricap);
    printf("\n\nGirdi degerleri: yukseklik %f ve yaricap %f ", &yukseklik, &yaricap);

    A = pi*yaricap*yaricap;
    hacim = 1/3*A*yukseklik;

    printf("\n\nDairesel koninin hacmi : %f cm kuptur.", &hacim);

    return 0;
}
