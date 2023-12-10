#include <stdio.h>
#include <stdlib.h>

void factorial(int fact){
    
    int reverse = 1;
    for (int i = 1; i <= fact; i++){
        if (fact == 0){
        fact = 1;
        break;}
        reverse = reverse * i; 
    }
    
    fact = reverse;
    printf("The factorial of your number: %d", fact);

}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num);
    return 0;
}
