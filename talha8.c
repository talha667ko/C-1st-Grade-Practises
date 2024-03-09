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


//    EXERCISE 11.3
/*void takeTheNums(float X[])
{
    for(int i = 0; i < 6; i++){
        scanf("%f", &X[i]);
    }
}

void putNumsInC(float a[], float b[], float c[])
{
    int j = 0;
    for(int i = 0; i < 12; i++){
       if(i % 2 == 0)
            c[i] = a[j];
        else{
            c[i] = b[j];
            j++;
        }
    }
}

void printC(float c[])
{
    for(int i = 0; i < 12; i++){
        printf("%.1f, ", c[i]);
    }
}

int main()
{
    float a[6] = { 0 };
    float b[6] = { 0 };
    float c[12] = { 0 };

    printf("Enter a array's numbers: ");
    takeTheNums(a);
    printf("Enter b array's numbers: ");
    takeTheNums(b);

    printf("c array's numbers are :\n");
    putNumsInC(a, b, c);
    printC(c);

    return 0;
}*/


//    EXERCISE 11.4
/*void scanValues(float c[])
{
    for(int i = 0; i < 12; i++){
        scanf("%f", &c[i]);
    }
}

void dealToAB(float a[], float b[], float c[])
{
    int j = 0;
    for(int i = 0; i < 12; i++){
       if(i % 2 == 0)
            a[j] = c[i];
        else{
            b[j] = c[i];
            j++;
        }
    }
}

void printAB(float x[])
{
    for(int i = 0; i < 6; i++){
        printf("%.1f, ", x[i]);
    }
    printf("\n");
}

int main()
{
    float a[6] = { 0 };
    float b[6] = { 0 };
    float c[12] = { 0 };

    printf("Enter c array's numbers (12 values): ");
    scanValues(c);

    dealToAB(a, b, c);
    printf("A array's values: ");
    printAB(a);
    printf("B array's values: ");
    printAB(b);

    return 0;
}*/


//    EXERCISE 11.6
/*void Under(float [], int);
void Scan(float a[])
{
    for (int i = 0; i < 10; i++){
        scanf("%f", &a[i]);
    }
    
}

void Average(float a[])
{
    float total = 0;
    float average = 0;

    for (int i = 0; i < 10; i++){
        total = total + a[i];
    }
    average = total / 10;
    printf("\nThe average is %.2f", average);
    
    Under(a, average);

}

void Under(float b[], int avrg)
{
    printf("\nValues under the average:\n");
    for (int i = 0; i < 10; i++){
        if(b[i] < avrg)
        printf("%.f ", b[i]);
    }
}

int main()
{
    float values[10] = { 0 };

    printf("Enter the array's values: ");
    Scan(values);

    Average(values);
    return 0;
}*/


//    EXERCISE 11.7
/*void defineAB(float c[], float a[], float b[], float avrg)
{
    int j = 0;
    int k = 0;
    for (int i = 0; i < 10; i++){
        if(c[i] >= avrg){
            a[j] = c[i];
            j++; 
        }
        else{
            b[k] = c[i];
            k++;
        }
    }

    printf("\nValues of a (greater or equal):\n");
    for (int i = 0; i < j; i++){
        printf("%.1f ", a[i]);
    }
    printf("\nValues of b (smaller):\n");
    for (int i = 0; i < k; i++){
        printf("%.1f ", b[i]);
    }
    
}
void Average(float c[], float a[], float b[])
{
    float total = 0;
    float average = 0;

    for (int i = 0; i < 10; i++){
        total = total + c[i];
    }
    average = total / 10;
    printf("\nThe average is %.2f", average);
    defineAB(c, a, b, average);
}
void Scan(float c[])
{
    for (int i = 0; i < 10; i++){
        scanf("%f", &c[i]);
    }
}
int main()
{
    float c[10] = { 0 };
    float a[10] = { 0 };
    float b[10] = { 0 };

    printf("Enter 10 values: ");
    Scan(c);
    Average(c, a, b);
}*/


//    EXERCISE 11.9
/*void TheDay(float price[], float avrg)
{
    int day = 0;
    float diff = 0;
    diff = fabs(price[0] - avrg);
    printf("The average is %.2f", avrg);
    for (int i = 1; i < 30; i++){
        float substitude = fabs(price[i] - avrg);
        
        if(substitude > diff){
            day = i + 1;
            diff = substitude;
        }
    }
    printf("\n%d is the day with the highest difference and it's ", day);
    printf("%.2f\n $", diff);
}
void Average(float price[])
{
    float avrg = 0;
    for (int i = 0; i < 30; i++){
        avrg = avrg + price[i];
    }
    avrg = avrg / 30;

    TheDay(price, avrg);
}
void Scan(float price[])
{
    for (int i = 0; i < 30; i++){
        scanf("%f", &price[i]);
    }
}
int main()
{
    
    float gold[10] = { 0 };
    printf("Enter gold's prices for the past 30 days: ");
    Scan(gold);
    Average(gold);

}*/


//    EXERCISE 11.10
/*void print(int lamps[])
{
    printf("Lamps of the circuit that are On: ");
    for (int i = 0; i < 50; i++){
        if(lamps[i] == 1)
        printf("%d, ", i + 1);
    }

     printf("\nLamps of the circuit that are Off: ");
    for (int i = 0; i < 50; i++){
        if(lamps[i] == 0)
        printf("%d, ", i + 1);
    }
}
void Lamps(int lamps[])
{
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 50; j++){
            if(j % i == 0 && lamps[j - 1] == 0)
            lamps[j - 1] = 1;
            else if(j % i == 0 && lamps[j - 1] == 1)
            lamps[j - 1] = 0;
        }
        
    }
    print(lamps);
}
int main()
{
    int lamps[50] = { 0 };
    
    Lamps(lamps);
    return 0;
}*/
