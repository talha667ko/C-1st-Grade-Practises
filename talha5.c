//
//  main.c
//  dene
//
//  Created by TALHA Korkmaz on 08/11/2023.
//667

#include <stdio.h>

int main(int argc, const char * argv[]) {

//    -EXERCISE 7.1
//    int araSinav;
//    int sonSinav;
//    int devamPuan;
//    float ortalama;
//    printf("Ara sinav puanini giriniz: ");
//    scanf("%d", &araSinav);
//    printf("Son sinav puanini giriniz: ");
//    scanf("%d", &sonSinav);
//    printf("Devam puanini giriniz: ");
//    scanf("%d", &devamPuan);
//    ortalama = araSinav*0.4 + sonSinav*0.5 + devamPuan*0.1;
//    printf("\nOrtalama puaniniz %.2f", ortalama);
//    if (ortalama >= 60) {
//        printf("\nTebrikler gectiniz !\n");
//    }
//    else
//        printf("\nMaalesef kaldiniz !\n");

//    -EXERCICE 7.3 not done
//    int number1;
//    int number2;
//    int number0;
//    int number3;
//    int number4;
//    printf("Bes basamakli sayi giriniz : ");
//    scanf("%d%d%d%d%d", &number1,&number2,&number0,&number3,&number4);
//    if (number1==number3 && number2==number4) {
//        printf("\nGirilen %d%d%d%d%d sayisi palindrome dur.\n", number1, number2, number0, number3, number4);
//    }
//    else
//        printf("\nGirilen %d%d%d%d%d sayisi palindrome degildir.\n", number1, number2, number0, number3, number4);
    
//    -EXERCISE 7.4
//    float trafik;
//    float motor;
//    float ilkyardim;
//    float trfkPuan;
//    float mtrPuan;
//    float ilkyrdmPuan;
//    printf("Trafik yanlis sayisini giriniz: ");
//    scanf("%f", &trafik);
//    printf("Motor yanlis sayisini giriniz: ");
//    scanf("%f", &motor);
//    printf("Ilkyardim yanlis sayisini giriniz: ");
//    scanf("%f", &ilkyardim);
//    trfkPuan = (50-trafik)*2;
//    mtrPuan = (40-motor)*5/2;
//    ilkyrdmPuan = (30-ilkyardim)*10/3;
//    printf("\nTrafik puaniniz: %.2f", trfkPuan);
//    printf("\nMotor puaninz: %.2f", mtrPuan);
//    printf("\nIlkyardim puaniniz: %.2f\n", ilkyrdmPuan);
//    if (trfkPuan >= 70 && mtrPuan >= 70 && ilkyrdmPuan >= 70) {
//        printf("Direksiyon sinavina hak kazandiniz!");
//    }
//    else
//        printf("Uzgunuz direksiyon sinavina katilamazsiniz.\n");
    
//    -EXERCÝSE 7.5
    int yas;
    float kilo;
    float boy;
    float vucutKitleİ;

    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);
    printf("Kilonuzu giriniz: ");
    scanf("%f", &kilo);
    printf("Boyunuzu giriniz: ");
    scanf("%f", &boy);

    if(yas<=17 , yas>=13){

        printf("Kilonuzu giriniz (kg) : ");
        scanf("%d", &kilo);
        printf("Boyunuzu giriniz (m) : ");
        scanf("%f", &boy);

        vucutKitleİ = kilo/(boy*boy);

        if(vucutKitleİ>=18.50, vucutKitleİ<=24.99){
        printf("\nVucut kitle indeksiniz: %.2f", vucutKitleİ);
        printf("\nTebrikler askeri liseye girebilirsiniz.");
        }
        else
            printf("Maalesef liseye giremezsinz.");
    }
else
    printf("Maalesef liseye giremezsinz.");

//    -EXERCISE 7.7
//    char gender;
//    float height;
//    float weight;
//    float ideal;
//    float centimeter;
//    
//    printf("Enter your gender (m, M - f, F): ");
//    scanf("%c", &gender);
//    
//    if (gender== 'm' || gender== 'M' ) {
//        printf("Enter your height (m): ");
//        scanf("%f", &height);
//        printf("Enter your weight (kg): ");
//        scanf("%f", &weight);
//        
//        centimeter = (height*100) - 150;
//        ideal = 48.00 + centimeter/2.5*2.7;
//        
//        printf("\nYour ideal weight: %.2f\n", ideal);
//        if (weight > ideal) {
//            printf("You're heavier than your ideal weight.\n");
//        }
//        else if (weight < ideal){
//            printf("\nYou're lighter than your ideal weight.\n");
//        }
//        else
//            printf("You're at your ideal weight!\n");
//    }
//    else if (gender== 'f' || gender== 'F'){
//        
//        printf("Enter your height (m): ");
//        scanf("%f", &height);
//        printf("Enter your weight (kg): ");
//        scanf("%f", &weight);
//        
//        centimeter = (height*100) - 150;
//        ideal = 45.00 + centimeter/2.5*2.2;
//        
//        printf("\nYour ideal weight: %.2f\n", ideal);
//        if (weight > ideal) {
//            printf("You're heavier than your ideal weight.\n");
//        }
//        else if (weight < ideal){
//            printf("\nYou're lighter than your ideal weight.\n");
//        }
//        else
//            printf("You're at your ideal weight!\n");
//        
//    }
//        else
//            printf("You've entered a wrong letter.\n");

    
    return 0;
}
