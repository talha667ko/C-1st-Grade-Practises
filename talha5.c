//
//  main.c
//  dene
//
//  Created by TALHA Korkmaz on 08/11/2023.
//667

#include <math.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {

//    -EXERCISE 7.1
//    int araSinav;
//    int sonSinav;
//    int devamPuan;
//    float ortalama;
//    
//    printf("Ara sinav puanini giriniz: ");
//    scanf("%d", &araSinav);
//    printf("Son sinav puanini giriniz: ");
//    scanf("%d", &sonSinav);
//    printf("Devam puanini giriniz: ");
//    scanf("%d", &devamPuan);
//    
//    ortalama = araSinav*0.4 + sonSinav*0.5 + devamPuan*0.1;
//
//    printf("\nOrtalama puaniniz %.2f", ortalama);
//    
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
//    
//    printf("Bes basamakli sayi giriniz : ");
//    scanf("%d%d%d%d%d", &number1,&number2,&number0,&number3,&number4);
//    
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
//    
//    printf("Trafik yanlis sayisini giriniz: ");
//    scanf("%f", &trafik);
//    printf("Motor yanlis sayisini giriniz: ");
//    scanf("%f", &motor);
//    printf("Ilkyardim yanlis sayisini giriniz: ");
//    scanf("%f", &ilkyardim);
//    
//    trfkPuan = (50-trafik)*2;
//    mtrPuan = (40-motor)*5/2;
//    ilkyrdmPuan = (30-ilkyardim)*10/3;
//    
//    printf("\nTrafik puaniniz: %.2f", trfkPuan);
//    printf("\nMotor puaninz: %.2f", mtrPuan);
//    printf("\nIlkyardim puaniniz: %.2f\n", ilkyrdmPuan);
//    
//    if (trfkPuan >= 70 && mtrPuan >= 70 && ilkyrdmPuan >= 70) {
//        printf("Direksiyon sinavina hak kazandiniz!");
//    }
//    else
//        printf("Uzgunuz direksiyon sinavina katilamazsiniz.\n");


    
//    -EXERCISE 7.5
//    int yas;
//    float kilo;
//    float boy;
//    float vucutKitleİ;
//
//    printf("Yasinizi giriniz: ");
//    scanf("%d", &yas);
//
//    if(yas<= (17) || yas>=13){
//
//        printf("Kilonuzu giriniz (kg) : ");
//        scanf("%f", &kilo);
//        printf("Boyunuzu giriniz (m) : ");
//        scanf("%f", &boy);
//
//        vucutKitleİ = kilo/(boy*boy);
//
//        if(vucutKitleİ>=18.50 || vucutKitleİ<=24.99){
//        printf("\nVucut kitle indeksiniz: %.2f", vucutKitleİ);
//        printf("\nTebrikler askeri liseye girebilirsiniz.\n");
//        }
//        else
//            printf("Maalesef liseye giremezsinz.\n");
//    }
//    else
//    printf("Maalesef askeri liseye giremezsiniz.\n");


    
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



//    -EXERCISE 7.8
//    int assurance;
//    int repair;
//    int junk;
//    
//    printf("Enter the car's assurance, repairs and junk prices: ");
//    scanf("%d %d %d", &assurance, &repair, &junk);
//    
//    if (assurance-junk > repair) {
//        printf("\nSend it to the car service.");
//    }
//    else
//        printf("\nSend it to the car impound.\n");
//        printf("With this move you'll save %d$\n", repair-(assurance-junk));



//    -EXERCISE 7.13
//    int a;
//    int b;
//    int c;
//    int ab;
//    int bc;
//    int ac;
//    
//    printf("Enter the values a, b , c of the triangle: ");
//    scanf("%d %d %d", &a, &b, &c);
//    
//    ab = fabs(a-b);
//    bc = fabs(b-c);
//    ac = fabs(a-c);
//    
//    if (a<b+c && a>bc && b<a+c && b>ac && c<a+b && c>ab) {
//        printf("It is a triangle. This triangle type: \n");
//        if (b==a && a!=c && b!=c|| b==c && b!=a && c!=a || a==c && a!=b && c!=b) {
//            printf("Isosceles triangle.\n");
//        }
//        else if(a==b && a==c && b==c)
//            printf("Equilateral triangle.\n");
//        else
//            printf("Any triangle.\n");
//    }
//    else
//        printf("It isn't a triangle.\n");
    
    return 0;
}
