#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*int main()
{
    float average = 0;
    int notes[20];
    printf("Enter 20 notes: ");

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &notes[i]);
        average = average + notes[i];
    }
    
    average = average / 20;
    printf("The average of your class is %.2f", average);
    printf("\nNotes that are higher than the average.\n");
    
    for (int i = 0; i < 20; i++){
        if ( notes[i] > average){
            printf("%d\n", notes[i]);
        }
    }
}*/

/*int main()
{
    int array[5] = {13, 12, 0, 8, 5};

    for(int a = 0; a < 5; a++){
    for (int i = 0; i < 5; i++){
        int plus;
            if (array[i] > array[i + 1]){
                plus = array[i + 1];
                array[i + 1] = array[i];
                array[i] = plus;
            }
        }
        
    }
    printf("%d %d %d %d %d", array[0], array[1], array[2], array[3], array[4]);
    
}*/

/*int main()
{
    int number[5] = {13, 5, 0, 5, 8};
    int place = -1;

    for (int i = 0; i < 5; i++){
        if(number[i] == 5)
        place = i;
        else
        place = -1;
        if(place != -1){
            printf("Your number is at the %d index number.\n", place);
        }
    }
}*/

/*void printNum(int [], int);

int main()
{
    int numbers[5] = {13, 12, 0, 5, 8};
    printNum(numbers, 5);
}

void printNum(int numbers[], int n)
{
    for (int i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
}*/

/*void printAgain(int [], int);

int main()
{
    int a[5] = {13, 12, 0, 5, 8};

    printf("The start adress of a is: %p\n", a);
    for (int i = 0; i < 5; i++){
        printf("The a[%d] adress is: %p and the number is: %d\n", i, &a[i], a[i]);
    }
    printf("\n");
    printAgain(a, 5);
    printf("\n");
    printf("The a[3] adress is: %p and the number is: %d", &a[3], a[3]);
}
void printAgain(int b[], int n)
{
    printf("The start adress of b is: %p\n", b);
    for (int i = 0; i < 5; i++){
        printf("The b[%d] adress is: %p and the number is: %d\n", i, &b[i], b[i]);
    }
    b[3]= 46;
}*/


/*#define R 4
#define C 6

int main()
{
    int arr[R][C];
    int sum[C] = {0};
    int i,j;

    for(i = 0; i < R; i++){
        for(j = 0; j < C; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < R; i++){
        printf("%d . Row: ", i);
        for(j = 0; j < C; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("         -----------\n         ");

    for(i = 0; i < R; i++){
        for(j = 0; j < C; j++){
            sum[j] = sum[j] + arr[i][j];
        }
    }
    for(j = 0; j < C; j++){
        printf("%d ", sum[j]);
    }
}*/


//    EXERCISE 11.1
/*void printHistogram(int num[])
{
    for(int i = 0; i < 6; i++){
        printf("%d     ", num[i]);

        for(int j = 0; j < num[i]; j++){
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int numbers[6] = { 0 };
    int i;

    printf("Enter 6 numbers: ");
    for(i = 0; i < 6; i++){
        scanf("%d", &numbers[i]);
    }

    printHistogram(numbers);

    return 0;
}*/
