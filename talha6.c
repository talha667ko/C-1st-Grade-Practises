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


    
    
    return 0;
}
