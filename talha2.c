#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x = 0;
    float y = 0;

    printf("Urunun fiyatini giriniz(TL) : ");
    scanf("%f", &x);

    if (0 <= x < 100){
    y = x*0.9;
        }
    else if (100 <= x < 500){
    y = x*0.85;
        }
     else {
    y = x*0.75;
        }

    printf("Urunun indirimli fiyati = %f\n", y);

    return 0;
}
