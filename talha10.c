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


//    EXERCISE 13.8
/*int main()
{
    char equation[100];
    int x;
    char m1[10] = {0};
    char n1[10] = {0};
    int xIndice = 0;
    int m2;
    int n2;
    int j = 0;

    printf("Enter your equation (y=mx+n): ");
    fgets(equation, 100, stdin);

    printf("Enter the value of x: ");
    scanf(" %d", &x);

    for (int i = 2; equation[i] != '\0'; i++)
    {
        if (isalpha(equation[i]))
        {
            xIndice = i;
            break;
        }
    }

    for (int i = 2; i < xIndice; i++)
    {
        if (isdigit(equation[i]))
        {
            m1[j] = equation[i];
            j++;
        }
    }
    m1[j] = '\0';

    j = 0;
    for (int i = xIndice + 1; equation[i] != '\0'; i++)
    {
        if (isdigit(equation[i]))
        {
            n1[j] = equation[i];
            j++;
        }
    }
    n1[j] = '\0';

    m2 = atoi(m1);
    n2 = atoi(n1);

    printf("\ny = %d", m2*x+n2);
    return 0;
}*/


void stating(char h[], char frst[], char result[], char m[])
{
    int space = 0;
    int j = 0;
    int k = 0;
    for (int i = 0; h[i] == '\0'; i++)
    {
        if (isdigit(h[i]) && space == 0)
        {
            m[i] = h[i];
        }
        else if (isalpha(h[i]) && space == 0)
        {
            frst[j] = h[i];
        }
        
        if (isspace(h[i]))
        {
            space++;
        }
        if (space == 3)
        {
            result[k] = h[i];
            k++;
        }
    }
    
    //puts(h);
    printf("\n%s  %s  %s", frst,result,m);
}

int main()
{
    char heights[50];
    char first[2];
    char final[2];
    char measure[10];

    printf("Enter your quuestion: ");
    //  The question have to be wrotten alike: "Xm how many km"
    fgets(heights,50,stdin);

    stating(heights,first,final,measure);

    return 0;
}
