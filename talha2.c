#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x = 0;
    float y = 0;
    
    printf("Urunun fiyatini giriniz : ");
    scanf("%d", &x);
    
    if (0 <= x < 100){
    y = x*0.9;
    }
    else if (100 <= x < 500){
    y = x*0.85;
    }
    else if(500 <= x){
    y = x*0.75;
    }
    
    printf("Urunun indirimli fiyati = %f", y);
    
    return 0;
}
