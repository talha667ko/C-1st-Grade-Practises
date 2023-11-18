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
    
    
    return 0;
}
