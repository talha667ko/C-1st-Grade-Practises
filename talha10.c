#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

//  EXERCISE 13.1
/*int main()
{
    char name[255];
    printf("Enter your name: ");
    fgets(name,255,stdin);
    printf("\n%s", name);
    
    return 0;
}*/


//    EXERCISE 13.2
/*int main()
{
    char sentence[255];
    int counter = 0;
    printf("Enter your sentece: ");
    fgets(sentence,255,stdin);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'A')
        {
            counter++;
        }
    }
    printf("\nThere is %d a or A in your sentence.", counter);
    

    return 0;
}*/


//    EXERCISE 13.3
/*int main()
{
    char numbers[5][5];
    char total = 0;
    int x;

    printf("Enter 4 strings that including numbers (max 3 digits):\n");
    for (int i = 0; i < 4; i++)
    {
        fgets(numbers[i],5,stdin);
    }

    for (int i = 0; i < 4; i++)
    {
        x = atof(numbers[i]);
        total = total + x;
    }

    printf("The total of your numbers: %d", total);
    
    return 0;
}*/
