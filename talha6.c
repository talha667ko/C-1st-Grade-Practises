#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {

//   EXERCISE 8.1
    /*int number;
    
    printf("Decimal    Octal    Hexadecimal\n");
    
    for (number=0; number<=15; number++) {
        printf("%d         %o       %x\n", number, number, number);
    }*/


  //  EXERCISE 8.3
    /*int ascii;
    
    printf("ASCII CODE   B.CHARACTER    L.CHARACTER\n");
    
    ascii = 65;
    while(ascii<=84){
        printf("%d           %c              %c\n", ascii, ascii, ascii+32);
        ascii++;
    }*/


//    EXERCISE 8.4
    /*int number=0;
    int howMany;
    float oddNumber=0;
    float many=0;
    
    printf("Enter 10 numbers: ");
    
    for(howMany=0;howMany<10;howMany++ ){
        scanf("%d ", &number);
        if(number%2!=0){
            oddNumber = oddNumber + number;
            many = many+1;
        }
    }
    printf("\n%.f nubers that you entered are odd, arithmetic average: %.1f\n", many, oddNumber/many);*/


//    EXERCISE 8.6
    /*int howMany=0;
    int yearB;
    int yearE;
     
    printf("Enter the beginning: ");
    scanf("%d", &yearB);
    printf("Enter the ending year: ");
    scanf("%d", &yearE);
    printf("\n");
    
    while (yearB<=yearE) {
        if(yearB%4==0){
            printf("%d, ", yearB);
            howMany = howMany + 1;
        }
        yearB = yearB + 1;
    }
    printf("\nThere is %d leap year.\n", howMany);*/


//    EXERCISE 8.9
    /*int howMany;
    int sTimes;
    int theNum;
    int positive=0;
    int negative=0;
    
    printf("How many number are you going to enter: ");
    scanf("%d", &howMany);
    printf("The numbers : ");
    
    sTimes = 0;
    while(sTimes<howMany){
        scanf("%d", &theNum);
        if(theNum>0){
            positive = positive + 1;
        }
        else{
            negative = negative + 1;
        }
        sTimes++;
    }
    printf("\nThere is %d negative number(s) and %d positve.\n", negative, positive);*/



//    EXERCISE 8.13
    /*int face;
    int faceS;
    
    printf("Enter a face's lenght: ");
    scanf("%d", &face);
    printf("\n");
        
    for(; face>0 ; face-- ){
        for(faceS=face ; faceS>0 ; faceS-- )
            printf("*");
        printf("\n");
    }*/


//    EXERCISE 8.15
    /*printf("Prime numbers among 1 and 20: ");
    printf("1,");
    for(int i=2 ; i<21 ; i++){
        int flag=0;
        for(int j=2 ; j<i ;j++){
            if(i%j==0){
                flag=1;
            }
            
        }
        if(flag==0){
            printf("%d,", i);
        }
    }
    printf("\n");*/


//    EXERCISE 8.18
    /*int number;
    
    printf("Enter 5 number: ");
    
    for (int i=0; i<5 ; i++) {
        scanf("%d", &number);
        
        for (int j=number; j>0; j--) {
            printf("*");
        }
        printf("\n");
    }*/


//    EXERCISE 8.21
    /*printf("The numbers that you are searching: ");
    int prime[100];
    int a = 0;
    
    
     for (int i = 99; i > 9; i--) {
         int test = 1;
         for (int j = 2; j < i; j++) {
             if (i % j == 0 ) {
                 test = 0;
                 break;
             }
         }
         if(test == 1)
             prime[a] = i;
         a = a + 1;
     }
    printf("%d", prime[1]);*/


//    EXERCISE 8.23
    /*int howMany=0;
    int total=0;
    int answer;
    int number;
    int i;
    
    for (int a=0; a<2; ) {
        printf("\nHow many numbers are you going to enter: ");
        scanf("%d", &answer);
        if(answer<0){
            printf("The answer cannot be negative");
            continue;
        }
        else{
            printf("Enter %d numbers: ", answer);
            for (i=1; i<=answer; i++) {
                scanf("%d", &number);
                if (number%8==0 || number%13==0) {
                    total = total + number;
                    howMany = howMany + 1;
                }
            }
            printf("\n%d of your number are in the rules.", howMany);
            printf("\nThe addition is: %d\n", total);
        }
        a = a + 1;
        break;
        }*/


//    EXERCISE 8.24
    /*int num1;
    int num2;
    int num3;
    int num4;
    int end1=1;
    int end2=1;
    int end3=1;
    int end4=1;
    printf("This program exponants every digits by themselves.\n");
    printf("Enter a number of 4 digits: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    
    for (int a = num1; a>0; a--) {
        end1 = end1 * num1;
    }
    for (int b = num2; b>0; b--) {
        end2 = end2 * num2;
    }
    for (int c = num3; c>0; c--) {
        end3 = end3 * num3;
    }
    for (int d = num4; d>0; d--) {
        end4 = end4 * num4;
    }
    
    printf("The result is :%d\n", end1+end2+end3+end4);*/


//    EXERCISE 8.28
    /*int newest=1;
    int year;
    int howmany=1;
    for(int i=1; i>0; i++){
        printf("Enter the year of your car (Enter 0 to stop): ");
        scanf("%d", &year);
        if (year==newest) {
            howmany = howmany + 1;
            continue;
        }
        if (year>newest)
            newest = year;
        if (year == 0)
            break;
        if (year<1000){
            printf("Error!!! Enter a number with four digits.\n");
            continue;
        }
    }
    printf("The newest car is from %d (Total entries: %d)\n", newest, howmany);*/



//    EXERCISE 8.32
    /*int num1;
    long int numSmall1=1000000000000;
    long int numSmall2=1000000000000;

    for(int i =0; i <10; i++){
        printf("Number= ");
        scanf("%d", &num1);
        
        if(i<1){
            numSmall1 = num1;
            continue;
        }
        if(num1<numSmall1){
            numSmall2 = numSmall1;
            numSmall1 = num1;
            continue;
        }
        if (num1<numSmall2) {
            numSmall2 = num1;
        }
    }
    printf("\nThe smallest number: %ld", numSmall1);
    printf("\nThe second smallest number: %ld\n", numSmall2);*/


    int digit;
    int factSum = 0;
    int t = 1;
    int number;
    for (int i = 100; i < 1000; i++) {
        number = i;
        while (i > 0) {
            digit = i % 10;
            i = i / 10;
            for (int fact = 1; fact <= digit; fact++) {
                t = t*fact;
            }
            factSum += t;
        }
        if (number == factSum) {
            printf("%d", number);
            break;
        }
            }



//    EXERCISE 8.34
    /*int fstPart;
    int scdPart;
    int total;

    printf("Amazing numbers with 4 digits: ");

    for(int year = 1000; year <= 9999; year++){
        fstPart = year/100;
        scdPart = year%100;

        total = (fstPart+scdPart)*(fstPart+scdPart);
        if(total == year){
            printf("%d ", year);
        }
    }*/


//    EXERCISE 8.37
    /*int hundreds;
    int tens;
    int ones;
    int total;
    int howmany = 0;

    printf("Numbers that you are searching for: ");
    for(int number = 100; number < 1000; number++){
        hundreds = number/100;
        tens = (number/10)%10;
        ones = number%10;

        total = (hundreds*tens*ones)*(hundreds+tens+ones);
        if(total == number){
            printf("%d", number);
            howmany = howmany + 1;
            printf(",");
        }

    }

    printf("\nThere is %d special number with 3 digits.\n", howmany);*/



//    EXERCISE 8.44
    /*int number;
    int nbr;
    int digit;
    int dgt;
    int total = 0;
    int i = 1;
        
    while (1) {
        
    label:
        printf("Enter an Octal number (between 0-777777777): ");
        scanf("%d", &number);
        
        nbr = number;
        if(number >! 0 && number <! 777777777)
            continue;
        
        while (nbr > 0) {
            dgt = nbr % 10;
            
            if(dgt >= 8)
                goto label;
            nbr = nbr / 10;
        }
        
        while (number > 0) {
            digit = number % 10;
            total = total + (digit * i);
            i = i * 8;
            number = number / 10;
        }
        
        printf("\nThe Decimal form of your number is: %d\n\n", total);
        break;
    }*/


//    EXERCISE 8.49
    /*int num1;
    int num2;
    int num3;
    int countUp = 0;
    int countDown = 0;
    int random = 0;
    
    while (1) {
        printf("Enter three number: ");
        scanf("%d %d %d", &num1, &num2, &num3);
        
        if (num1 < num2 && num2 < num3) {
            countUp += 1;
            printf("The numbers are in ascending order.\n");
            continue;
        }
        else if (num3 < num2 && num2 < num1) {
            countDown += 1;
            printf("The numbers are in descending order.\n");
            continue;
        }
        else if(num1 == num2 && num1 == num2 && num2 == num3)
            break;
        else {
            random += 1;
            printf("The numbers are un a random order.\n");
            continue;
        }
            
    
    }
    printf("\nProgram ends");
    printf("\n%d of your number arrays ascending, %d descending and %d random\n", countUp, countDown, random);*/


//    EXERCISE 8.59
    /*float RabbitS = 1000;
    float WolfS = 1000;
    float RabbitA = 0;
    float WolfA = 0;
    
    printf("Day 1 there are %.f wolfs and %.f Rabbit\n", WolfS, RabbitS);
    for (int i = 2; i < 101; i++) {
        RabbitA = 1.01*RabbitS + 0.00001*RabbitS*WolfS;
        WolfA = 0.995*WolfS + 0.0000001*RabbitS*WolfS;
        
        RabbitS = RabbitA;
        WolfS = WolfA;
        printf("Day %d there are %.f wolfs and %.f Rabbit\n", i, WolfS, RabbitS);
    }*/




//    EXERCISE 8.63
    /*int brand;
    float amount;
    int renault = 0;
    int mazda = 0;
    int honda = 0;
    int ford = 0;
    float renaultA = 0;
    float mazdaA = 0;
    float hondaA = 0;
    float fordA = 0;
    float BiggestA;
    
    printf("Renault (1)");
    printf("\nMazda   (2)");
    printf("\nHonda   (3)");
    printf("\nFord    (4)");
    
    printf("\n\nTO STOP THE PROGRAM ENTER 111 0\n");
    
    while (1) {
        printf("Brand, amount: ");
        scanf("%d %f", &brand, &amount);
        
        if (brand == 111)
            break;
        
        switch (brand) {
            case 1:
                renault += 1;
                renaultA += amount;
                break;
            case 2:
                mazda += 1;
                mazdaA += amount;
                break;
            case 3:
                honda += 1;
                hondaA += amount;
                break;
            case 4:
                ford += 1;
                fordA += amount;
                break;
            default:
                printf("You entered a wrong number.\n");
        }
        
        
    }
    printf("\n\nTHE PROGRAM HAS ENDED");
    
    if(renault > mazda && renault > honda && renault > ford)
        printf("\nThe brand that came the most is Renault (%d times)", renault);
    else if(mazda > renault && mazda > honda && mazda > ford)
        printf("\nThe brand that came the most is Mazda (%d times)", mazda);
    else if(honda > renault && honda > mazda && honda > ford)
        printf("\nThe brand that came the most is Honda (%d times)", honda);
    else if(ford > renault && ford > honda && ford > mazda)
        printf("\nThe brand that came the most is Ford (%d times)", ford);
    else
        printf("\nThere is an equality.");
    
    if (renaultA > mazdaA && renaultA > hondaA && renaultA > fordA)
        printf("\nThe brand that has bought the most is Renault (%.2f)\n", renaultA);
    
    else if (mazdaA > renaultA && mazdaA > hondaA && mazdaA > fordA)
        printf("\nThe brand that has bought the most is Mazda (%.2f)\n", mazdaA);
    
    else if (hondaA > renaultA && hondaA > mazdaA && hondaA > fordA)
        printf("\nThe brand that has bought the most is Honda (%.2f)\n", hondaA);
    
    else if (fordA > renaultA && fordA > hondaA && fordA > mazdaA)
        printf("\nThe brand that has bought the most is Ford (%.2f)\n", fordA);
    
    else
        printf("\nThere is an equality.");*/


//    EXERCISE 8.73
    /*int num;
    int collatz = 1;
    
    printf("Enter your number: ");
    
    while (1) {
        scanf("%d", &num);
        if (num <= 0) {
            printf("ERROR !!! Please enter a positive number: ");
            continue;
        }
        printf("\nCollatz series: %d,", num);
        
        for (; num > 1; ) {
            
            if (num % 2 != 0)
                num = num * 3 + 1;
            else
                num = num / 2;
            
            collatz += 1;
            printf("%d", num);
            if(num != 1)
                printf(",");
        }
        break;
    }
    printf("\nThe series ise composed of %d numbers.\n", collatz);*/
    
    return 0;
}
