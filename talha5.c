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
    /*int araSinav;
    int sonSinav;
    int devamPuan;
    float ortalama;
    
    printf("Ara sinav puanini giriniz: ");
    scanf("%d", &araSinav);
    printf("Son sinav puanini giriniz: ");
    scanf("%d", &sonSinav);
    printf("Devam puanini giriniz: ");
    scanf("%d", &devamPuan);
    
    ortalama = araSinav*0.4 + sonSinav*0.5 + devamPuan*0.1;

    printf("\nOrtalama puaniniz %.2f", ortalama);
    
    if (ortalama >= 60) {
        printf("\nTebrikler gectiniz !\n");
    }
    else
        printf("\nMaalesef kaldiniz !\n");*/

    

//    -EXERCICE 7.3 not done
      /*int number1;
        int number2;
        int number0;
        int number3;
        int number4;
    
        printf("Bes basamakli sayi giriniz : ");
        scanf("%d%d%d%d%d", &number1,&number2,&number0,&number3,&number4);
    
        if (number1==number3 && number2==number4) {
            printf("\nGirilen %d%d%d%d%d sayisi palindrome dur.\n", number1, number2, number0, number3, number4);
        }
        else
            printf("\nGirilen %d%d%d%d%d sayisi palindrome degildir.\n", number1, number2, number0, number3, number4);*/


    
//    -EXERCISE 7.4
     /*float trafik;
        float motor;
        float ilkyardim;
        float trfkPuan;
        float mtrPuan;
        float ilkyrdmPuan;
    
        printf("Trafik yanlis sayisini giriniz: ");
        scanf("%f", &trafik);
        printf("Motor yanlis sayisini giriniz: ");
        scanf("%f", &motor);
        printf("Ilkyardim yanlis sayisini giriniz: ");
        scanf("%f", &ilkyardim);
    
        trfkPuan = (50-trafik)*2;
        mtrPuan = (40-motor)*5/2;
        ilkyrdmPuan = (30-ilkyardim)*10/3;
    
        printf("\nTrafik puaniniz: %.2f", trfkPuan);
        printf("\nMotor puaninz: %.2f", mtrPuan);
        printf("\nIlkyardim puaniniz: %.2f\n", ilkyrdmPuan);
    
        if (trfkPuan >= 70 && mtrPuan >= 70 && ilkyrdmPuan >= 70) {
            printf("Direksiyon sinavina hak kazandiniz!");
        }
        else
            printf("Uzgunuz direksiyon sinavina katilamazsiniz.\n");*/


    
//    -EXERCISE 7.5
        /*int yas;
        float kilo;
        float boy;
        float vucutKitleİ;
    
        printf("Yasinizi giriniz: ");
        scanf("%d", &yas);
    
        if(yas<= (17) || yas>=13){
    
            printf("Kilonuzu giriniz (kg) : ");
            scanf("%f", &kilo);
            printf("Boyunuzu giriniz (m) : ");
            scanf("%f", &boy);
    
            vucutKitleİ = kilo/(boy*boy);
    
            if(vucutKitleİ>=18.50 || vucutKitleİ<=24.99){
            printf("\nVucut kitle indeksiniz: %.2f", vucutKitleİ);
            printf("\nTebrikler askeri liseye girebilirsiniz.\n");
            }
            else
                printf("Maalesef liseye giremezsinz.\n");
        }
        else
        printf("Maalesef askeri liseye giremezsiniz.\n");*/


    
//    -EXERCISE 7.7
      /*char gender;
        float height;
        float weight;
        float ideal;
        float centimeter;
    
        printf("Enter your gender (m, M - f, F): ");
        scanf("%c", &gender);
    
        if (gender== 'm' || gender== 'M' ) {
            printf("Enter your height (m): ");
            scanf("%f", &height);
            printf("Enter your weight (kg): ");
            scanf("%f", &weight);
    
            centimeter = (height*100) - 150;
            ideal = 48.00 + centimeter/2.5*2.7;
    
            printf("\nYour ideal weight: %.2f\n", ideal);
            if (weight > ideal) {
                printf("You're heavier than your ideal weight.\n");
            }
            else if (weight < ideal){
                printf("\nYou're lighter than your ideal weight.\n");
            }
            else
                printf("You're at your ideal weight!\n");
        }
        else if (gender== 'f' || gender== 'F'){
    
            printf("Enter your height (m): ");
            scanf("%f", &height);
            printf("Enter your weight (kg): ");
            scanf("%f", &weight);
    
            centimeter = (height*100) - 150;
            ideal = 45.00 + centimeter/2.5*2.2;
    
            printf("\nYour ideal weight: %.2f\n", ideal);
            if (weight > ideal) {
                printf("You're heavier than your ideal weight.\n");
            }
            else if (weight < ideal){
                printf("\nYou're lighter than your ideal weight.\n");
            }
            else
                printf("You're at your ideal weight!\n");
    
        }
            else
                printf("You've entered a wrong letter.\n");*/


//    -EXERCISE 7.8
     /*int assurance;
        int repair;
        int junk;
    
        printf("Enter the car's assurance, repairs and junk prices: ");
        scanf("%d %d %d", &assurance, &repair, &junk);
    
        if (assurance-junk > repair) {
            printf("\nSend it to the car service.");
        }
        else
            printf("\nSend it to the car impound.\n");
            printf("With this move you'll save %d$\n", repair-(assurance-junk));*/



//    -EXERCISE 7.13
        /*int a;
        int b;
        int c;
        int ab;
        int bc;
        int ac;
    
        printf("Enter the values a, b , c of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);
    
        ab = fabs(a-b);
        bc = fabs(b-c);
        ac = fabs(a-c);
    
        if (a<b+c && a>bc && b<a+c && b>ac && c<a+b && c>ab) {
            printf("It is a triangle. This triangle type: \n");
            if (b==a && a!=c && b!=c|| b==c && b!=a && c!=a || a==c && a!=b && c!=b) {
                printf("Isosceles triangle.\n");
            }
            else if(a==b && a==c && b==c)
                printf("Equilateral triangle.\n");
            else
                printf("Any triangle.\n");
        }
        else
            printf("It isn't a triangle.\n");*/


//        -EXERCISE 7.15
        /*float time;
    
        printf("What time is it? : ");
        scanf("%f", &time);
    
        if (time>=0 && time<=24) {
            if (time<6)
                printf("Sleep good!\n");
            else if (time<11)
                printf("Good morning!\n");
            else if (time<17)
                printf("Have a good day!\n");
            else if (time<22)
                printf("Good afternoon!\n");
            else if (time<24)
                printf("Good night!\n");
        }
        else
            printf("You typed a wrong value.\n");*/


    
//    EXAMPLE switch
    /*char vehicle;
    int day;
    int Km;
    int cost;

    printf("Type of vehicle/locomotion\n");
    printf("(A or a) All road\n");
    printf("(L or l) Living vehicle\n");
    printf("(S or s) Sports car\n\n");

    printf("Enter your type of vehicle/locomotion: ");
    scanf("%c", &vehicle);
    printf("How many days did you used it: ");
    scanf("%d", &day);
   printf("How many km have you done with the vehicle: ");
   scanf("%d", &Km);

    switch(vehicle){
    case 'a':
    case 'A':
        cost = day*20 + Km*18;
        printf("\nYour amount is : %d $\n", cost);
        break;
    case 'l':
    case 'L':
        cost = day*32 + Km*22;
        printf("\nYour amount is : %d $\n", cost);
        break;
    case 's':
    case 'S':
        cost = day*51 + Km*36;
        printf("\nYour amount is : %d $\n", cost);
        break;
    default: printf("You entered a wrong letter!!!\n");
    }
    system("pause");*/



//    EXERCISE 7.16
/*  float rights;
  float mistakes;
  float points;

  printf("Enter the number of your rights: ");
  scanf("%f", &rights);
  printf("Enter the number of your mistakes: ");
  scanf("%f", &mistakes);

  points = rights - mistakes/4;
  printf("\nYour total points: %.2f\n", points);

  if(points<10){
    printf("Your class is: Beginner\n");
  }
  else if(points>=10 && points<30){
    printf("Your class is: Elementary\n");
  }
  else if(points>=30 && points<50){
    printf("Your class is: Preintermediate\n");
  }
  else if(points>=50 && points<70){
    printf("Your class is: Intermediate\n");
  }
  else if(points>=70){
    printf("Your class is: Upper!\n");
  }
  else
    printf("You entered a wrong value!\n");*/


//  EXERCİSE 7.18   
    /*float monthly;
    float yearly;
    float totalTax;
    float monthlyTax;
    float monthlyWoutTax;

    printf("Enter your gross monthly salary: ");
    scanf("%f", &monthly);
    yearly = monthly*12;
    printf("\nYour salary per year: %.2f", yearly);
    if (yearly>0 && yearly<=10700){
        totalTax = yearly*0.15;
        monthlyTax = totalTax/12;
        monthlyWoutTax = monthly-monthlyTax;
        printf("\nAll the taxes you must pay: %.2f\n", totalTax);
        printf("The taxes you must pay every months: %.2f\n", monthlyTax);
        printf("Your monthly net salary: %.2f\n", monthlyWoutTax);
    }
    else if(yearly>10700 && yearly<=26000) {
        totalTax = (yearly-10700)*0.20 + 1605;
        monthlyTax = totalTax/12;
        monthlyWoutTax = monthly-monthlyTax;
        printf("\nAll the taxes you must pay: %.2f\n", totalTax);
        printf("The taxes you must pay every months: %.2f\n", monthlyTax);
        printf("Your monthly net salary: %.2f\n", monthlyWoutTax);

    }
    else if(yearly>26000 && yearly<=94000){
        totalTax = (yearly-26000)*0.27 + 4665;
        monthlyTax = totalTax/12;
        monthlyWoutTax = monthly-monthlyTax;
        printf("\nAll the taxes you must pay: %.2f\n", totalTax);
        printf("The taxes you must pay every months: %.2f\n", monthlyTax);
        printf("Your monthly net salary: %.2f\n", monthlyWoutTax);

    }
    else if(yearly>94000){
        totalTax = yearly*0.35;
        monthlyTax = totalTax/12;
        monthlyWoutTax = monthly-monthlyTax;
        printf("\nAll the taxes you must pay: %.2f\n", totalTax);
        printf("The taxes you must pay every months: %.2f\n", monthlyTax);
        printf("Your monthly net salary: %.2f\n", monthlyWoutTax);
    }
    else
        printf("\nYou entered a wrong amount!\n");*/


//  My sister´s old quiz 3
    /*float number1;
    float number2;
    char operation;
    float total;

    printf("Calculator\n");
    printf("------------------------------\n");
    printf("Enter [Number1] Operation [+ - * /] [Number2]:\n");
    scanf("%f%c%f", &number1, &operation, &number2);

    switch(operation){
    case '+':
        total = number1 + number2;
        printf("%.2f + %.2f = %.2f\n", number1, number2, total);
        break;
    case '-':
        total = number1 - number2;
        printf("%.2f - %.2f = %.2f\n", number1, number2, total);
        break;
    case '*':
        total = number1 * number2;
        printf("%.2f * %.2f = %.2f\n", number1, number2, total);
        break;
    case '/':
        if(number2 != 0){
        total = number1 / number2;
        printf("%.2f / %.2f = %.2f\n", number1, number2, total);
        }
        else
            printf("In a division, you cannot divide something by 0!\n");
        break;
    default:
        printf("You entered something wrong!");
    }*/


//    EXERCISE 7.22
    /*float contestant1[3];
    float contestant2[3];
    float contestant3[3];
    float pointA;
    float pointB;
    float pointC;

    printf("Enter the first judge's scorecard: ");
    scanf("%f %f %f", &contestant1[0], &contestant2[0], &contestant3[0]);
    printf("Enter the second judge's scorecard: ");
    scanf("%f %f %f", &contestant1[1], &contestant2[1], &contestant3[1]);
    printf("Enter the third judge's scorecard: ");
    scanf("%f %f %f", &contestant1[2], &contestant2[2], &contestant3[2]);

    pointA = (contestant1[0]+contestant1[1]+contestant1[2])/3;
    pointB = (contestant2[0]+contestant2[1]+contestant2[2])/3;
    pointC = (contestant3[0]+contestant3[1]+contestant3[2])/3;

    if(pointA>pointB && pointA>pointC)
        printf("\nThe first contestant is is the best (His average = %.2f)\n", pointA);
    else if(pointB>pointA && pointB>pointC)
        printf("\nThe second contestant is is the best (His average = %.2f)\n", pointB);
    else if(pointC>pointA && pointC>pointB)
        printf("\nThe third contestant is is the best (His average = %.2f)\n", pointC);
    else
        printf("There is an equality\n");*/


//    EXERCISE 7.30
    /*char purchase;
    float dollar;
    
    printf("****PRODUCT CATALOG****");
    printf("\n(T or t): Transistor");
    printf("\n(R or r): Resistance");
    printf("\n(C or c): Condenser");
    printf("\n************************");
    printf("\nEnter your choice: ");
    scanf("%c", &purchase);
    
    switch (purchase) {
        case 'T':
        case 't':
            printf("How much TRANSISTOR do you want: ");
            scanf("%f", &dollar);
            if (dollar>1000) {
                printf("Amount = %.2f\n", dollar*0.9);
            }
            else
                printf("Amount = %.2f\n", dollar);
            break;
        case 'R':
        case 'r':
            printf("How much RESISTANCE do you want: ");
            scanf("%f", &dollar);
            if (dollar>100) {
                printf("Amount = %.2f\n", dollar*0.95);
            }
            else
                printf("Amount = %.2f\n", dollar);
            break;
        case 'C':
        case 'c':
            printf("How much CONDENSER do you want: ");
            scanf("%f", &dollar);
            if (dollar>500) {
                printf("Amount = %.2f\n", dollar*0.92);
            }
            else
                printf("Amount = %.2f\n", dollar);
            break;
        default:
            printf("Error, retry please!\n");
            break;
    } */


//    EXERCISE 7.33
    /*int day;
    
    printf("Enter a day value (1-7): ");
    scanf("%d", &day);
    
    switch (day) {
        case 1:
            printf("It's MONDAY's value \n");
            break;
        case 2:
            printf("It's TUESDAY's value \n");
            break;
        case 3:
            printf("It's WEDNESDAY's value \n");
            break;
        case 4:
            printf("It's THURSDAY's value \n");
            break;
        case 5:
            printf("It's FRIDAY's value \n");
            break;
        case 6:
            printf("It's SATURDAY's value \n");
            break;
        case 7:
            printf("It's SUNDAY's value \n");
            break;
            
        default:
            printf("You entered a wrond number\n");
    }*/


//    EXERCISE 7.34
    /*int month;
    int people;
    int amount;
    
    printf("In which month (1..12) and with how much people are you going to go: ");
    scanf("%d %d", &month, &people);
    
    switch (month){
        case 12:
        case 1:
        case 2:
            amount = people*150;
            printf("\nYour total is: %d\n", amount);
            break;
        case 3:
        case 4:
        case 5:
            amount = people*50;
            printf("\nYour total is: %d\n", amount);
            break;
        case 6:
        case 7:
        case 8:
            amount = people*50;
            printf("\nYour total is: %d\n", amount);
            break;
        case 9:
        case 10:
        case 11:
            amount = people*250;
            printf("\nYour total is: %d\n", amount);
            break;
        default:
            printf("\nError, retry please.\n");       
    }*/
    



//    EXERCISE 7.35
    /*char videoTape;
    int numberOF;
    int cost;
    
    printf("Enter the tape type (A,a,B,b,C,c,D,d) and how much did you took: ");
    scanf("%c %d", &videoTape, &numberOF);
    
    switch(videoTape){
        case 'A':
        case 'a':
            cost = numberOF*1;
            printf("\nIt costs you: %d$\n", cost);
            break;
        case 'B':
        case 'b':
            cost = numberOF*2;
            printf("\nIt costs you: %d$\n", cost);
            break;
        case 'C':
        case 'c':
        case 'D':
        case 'd':
            cost = numberOF*3;
            printf("\nIt costs you: %d$\n", cost);
            break;
        default:
            printf("You're doing a mistake !?");
    }*/

    
    return 0;
}
