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


//    EXERCISE 13.4
/*int main()
{
    char str[100];
    printf("Enter your string: ");
    fgets(str,100,stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
    printf("The result: %s", str);    
    return 0;
}*/


//    EXERCISE 13.6
/*int main()
{
    char sentence[100];

    printf("Enter your sentence: ");
    fgets(sentence,100,stdin);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        sentence[0] = toupper(sentence[0]);
        if (sentence[i] == ' ')
        {
            sentence[i+1] = toupper(sentence[i+1]);
        }
        
    }

    printf("\nYour string now: %s", sentence);
    
    return 0;
}*/
