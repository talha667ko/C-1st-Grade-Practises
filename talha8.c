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


//    EXERCISE 11.11
/*void Spin(int array[], int time)
{
    for (int i = 0; i < time; i++){
        int yedek = array[0];
        for (int i = 0; i < 10; i++){
            array[i] = array[i + 1];
        }
        array[10 - 1] = yedek;
    }
    
     printf("\nAfter spin: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", array[i]);
    }
}
int main()
{
    int array[10] = { 0 };
    int HowMany = 0;

    printf("Enter the array's numbers: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    printf("How do you want to spin: ");
    scanf("%d", &HowMany);

    Spin(array, HowMany);
    return 0;
}*/


//    EXERCISE 11.13
/*int frstNotRepeat(int Nums[])
{
    int i = 0;
    int a = 0;
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            if(Nums[i] == Nums[j] && i != j ){
                a = 0;
                break;
            }
            else if(Nums[i] != Nums[j] && i != j){
                a = 1;
            }
        }
        if(a == 1){
            //printf("The first number to not repeating: %d %d %d", Nums[i], i, a);
            return Nums[i];
            break;
        }
    }
    if(a != 1)
    return -1;
}
int main()
{
    int Nums[7] = { 3, 12, 3, 12, 3, 3, 10}, c;

    c = frstNotRepeat(Nums);
    printf("The first number to not repeating: %d", c);
    return 0;
}*/


//    EXRCISE 11.16
/*void median(int n[], int a)
{
    float med = 0;
    if (a % 2 != 0){
        med = n[((a + 1) / 2) + 1];
        printf("\nThe median is: %d", med);
    }
    else{
        med = (float)(n[(a / 2) - 1] + n[((a + 2) / 2) - 1])/2;
        printf("\nThe median is: %.1f", med);
    }
}

void arrange(int n[], int a)
{
    int replace = 0;
    for(int cross = 1; cross < a-1; cross++){   
        for (int i = 0; i < a - 1; i++){
            if (n[i] > n[i + 1]){
                replace = n[i];
                n[i] = n[i + 1];
                n[i + 1] = replace;
            }
        }
    }

    printf("\nThe array arranged : ");
    for (int i = 0; i < a; i++){
        printf("%d, ", n[i]);
    }
    
    median(n, a);
}

void randomNUMS(int n[], int a)
{
    srand(time(NULL));

    for (int i = 0; i < a; i++){
        n[i] = rand() % 100;
    }

    printf("\nThe array done by the computer: ");
    for (int i = 0; i < a; i++){
        printf("%d, ", n[i]);
    }
    arrange(n, a);
}

int main()
{
    int User = 0;
    printf("Enter how numbers you want: ");
    scanf("%d", &User);


    int num[50] = { 0 };

    randomNUMS(num, User);
}*/


//    EXERCISE 11.18
/*void search(int n[], int nS[], int a)
{
    int changes = a;
    for (int i = 0; i < a; i++){
        if (nS[i] != n[i]){
            changes--;
        }
    }
    printf("\n%d haven't changed place.", changes);
}

void arrange(int n[], int a)
{
    int replace = 0;
    for(int change = 1; change < a-1; change++){   
        for (int i = 0; i < a - 1; i++){
            if (n[i] > n[i + 1]){
                replace = n[i];
                n[i] = n[i + 1];
                n[i + 1] = replace;
            }
        }
    }

    printf("\nThe array arranged : ");
    for (int i = 0; i < a; i++){
        printf("%d, ", n[i]);
    }
}

void randomNUMS(int n[], int a, int nS[])
{
    srand(time(NULL));

    for (int i = 0; i < a; i++){
        n[i] = rand() % 100;
    }

    printf("\nThe array done by the computer: ");
    for (int i = 0; i < a; i++){
        printf("%d, ", n[i]);
    }

    for (int i = 0; i < a; i++){
        nS[i] = n[i];
    }
    
    arrange(n, a);
    search(n, nS, a);
}

int main()
{
    int numS[50] = { 0 };
    int num[50] = { 0 };
    int User = 0;

    printf("Enter how many numbers you want: ");
    scanf("%d", &User);

    randomNUMS(num, User, numS); 
}*/


//    EXERCISE 11.24
/*void Calcul(int x, int staff[], int sale[])
{
    int greater = sale[0];

    printf("\nThe sales difference between the best seller and the others");
    printf("\nThe ID     : ");
    for (int i = 0; i < x; i++){
        printf("%d  ", staff[i]);
    }
    
    for (int i = 0; i < x - 1; i++){
        if(sale[i + 1] > sale[i]){
            greater = sale[i + 1];
        }
    }
    
    printf("\nSales to do: ");
    for (int i = 0; i < x; i++){
        printf("%d   ", greater - sale[i]);
    }
}
void Scan(int x, int staff[], int sale[])
{
    for (int i = 0; i < x; i++){
        printf("Enter the ID and the sales of the staff: ");
        scanf("%d %d", &staff[i], &sale[i]);
    }

    Calcul(x, staff, sale);
}
int main()
{
    int Many = 0;
    int Staff[50] = { 0 };
    int sales[50] = { 0 };

    printf("Type the quantity of staff (50 maximum): ");
    scanf("%d", &Many);

    Scan(Many, Staff, sales);
}*/


//    EXERCISE 11.26
/*int Croissant(int suite[], int cmb)
{
    int controle;

        for (int i = 0; i < cmb - 1; i++){
            if(suite[i] < suite[i + 1]){
                controle = 1;
            }
            else{
                controle = 0;
                break;
            }
        }
    return controle;
}
int main()
{
    int suite[100] = { 0 };
    int cmb = 0;

    printf("Entrez le nombre d'élément de votre suite: ");
    scanf("%d", &cmb);
    printf("Entrez une suite de nombre: ");
    for (int i = 0; i < cmb; i++){
        scanf("%d", &suite[i]);
    }

    if (Croissant(suite, cmb) == 1){
        printf("\nVotre suite est bien classé dans l'ordre croissant.");
    }
    else
        printf("\nLes éléments de votre suite ne sont pas dans l'ordre croissant.");

    return 0;
}*/


//    EXERCISE 11.27
/*void arrange(float tall[], float small[])
{
    printf("\nThe heights mixed, one small one tall:\n ");
    for (int i = 0; i < 6; i++){
        printf("%.2f ", small[i]);
        printf("%.2f ", tall[i]);
    }
    
}
void separate(float team[], float tall[], float small[])
{
    float rplcmnt;

    for (int pass = 1; pass < 12; pass++){
        for (int i = 0; i < 12 - 1; i++){
            if (team[i] > team[i + 1]){
                rplcmnt = team[i];
                team[i] = team[i + 1];
                team[i + 1] = rplcmnt;
            }
        }    
    }
    
    for (int i = 0; i < 6; i++){
        small[i] = team[i];
    }
    int j = 0;
    for (int i = 11; i > 5; i--){
        tall[j] = team[i];
        j++;
    }
    
}
int main()
{
    float team[12] = { 0 };
    float tall[6] = { 0 };
    float small[6] = { 0 };

    printf("Enter the height of every player: ");
    for (int i = 0; i < 12; i++){
        scanf("%f", &team[i]);
    }

    separate(team, tall, small);
    arrange(tall, small);
    
}*/


//    EXERCISE 11.53
/*#define N 3

void print(int m[][N], int row[], int column[])
{
    for(int i =0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", m[i][j]);
            if(j == N - 1)
            printf("%d\n", row[i]);
        }
    }
    for(int i =0; i < N; i++){
        printf("%d ", column[i]);
    }

}
void sum(int m[][N])
{
    int row[3] = { 0 };
    int column[3] = { 0 };

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            row[i] = row[i] + m[i][j];
        }
    }
     for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            column[i] = column[i] + m[j][i];
        }
    }
    print(m, row, column);
}
void scan(int m[N][N], int k)
{
    for(int i = 0; i < N; i++){
        scanf("%d", &m[k][i]);
    }
}
int main()
{
    int matrix[N][N] = { 0 };
    int k = 0;

    printf("Enter the values of the 1st row: ");
    scan(matrix, k);
    k = k + 1;
    printf("Enter the values of the 2nd row: ");
    scan(matrix, k);
    k = k + 1;
    printf("Enter the values of the 3rd row: ");
    scan(matrix, k);

    sum(matrix);
    return 0;
}*/


//    EXERCISE 11.54
/*#define N 8

void printTable(int chess[][N], int x, int y)
{
    printf(" ");
    for (int j = 0; j < N; j++){
        printf(" %d", j);
        if(j == N - 1)
        printf("\n");
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(j == 0)
            printf("%d ", i);

            if(i == x && j == y)
            printf("A ");
            else if(i == x-2 && j == y+1 || i == x-2 && j == y-1 || i == x-1 && j == y+2 || i == x-1 && j == y-2 ||
                     i == x+2 && j == y+1 || i == x+2 && j == y-1 || i == x+1 && j == y+2 || i == x+1 && j == y-2)
                     printf("* ");
            else
                printf("- ");

            if(j == N-1)
            printf("\n");
        }
        
    }
    
}
int main()
{
    int chess[N][N] = { 0 };
    int row;
    int column;

    printf("Enter the the localisation of your horse (row, column): ");
    scanf("%d %d", &row, &column);
    
    printTable(chess, row, column);
}*/


//    EXERCISE 11.55
/*#define N 8

int search(int b[][2], int x, int y)
{
    for (int i = 0; i < 9; i++){
        if(b[i][0] == x && b[i][1] == y)
        return 1;
    }
   return 0;
}
void printTable(int chess[][N], int bomb[][2])
{
    int k = 0;

    printf(" ");
    for (int j = 0; j < N; j++){
        printf(" %d", j);
        if(j == N - 1)
        printf("\n");
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(j == 0)
            printf("%d ", i);
            
            if(search(bomb, i, j)){
                printf("* ");
                k = k + 1;
            }
            else
                printf("- ");
            
            if(j == N-1){
            printf("\n");
            }
        }
        
    }
    
}
int main()
{
    int chess[N][N] = { 0 };
    int bombs[9][2]= { 0 };
    srand(time(NULL));

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 2; j++){
            bombs[i][j]= rand() % 8;
        }
    }

    printTable(chess, bombs);
    
}*/


//    EXERCISE 11.56
/*#define N 5
#define M 4

void whereIsIt(int c[][M])
{
    int totalA = 0;
    int road = 0;


    for (int i = 0; i < N; i++){
        int total = 0;
        for (int j = 0; j < M; j++){
            total = total + c[i][j];
        }
        if(total > totalA){
            totalA = total;
            road = i;
        }
    }
    
    int cheese = 0;
    for (int i = 0; i < M; i++){
        cheese = cheese + c[road][i];
        if(cheese >= 5){
            printf("\nThe mouse slept at the part %d of the canal %d.", i+1, road+1);
            break;
        }

    }
    
}

int main()
{
    int canal[N][M]= { 0 };

    printf("Enter the cheese weight.\n");
    for(int i = 0; i < N; i++){
        printf("%d. canal (From the 1st part to the 4th): ", i+1);
        for (int j = 0; j < M; j++){
            scanf("%d", &canal[i][j]);
        } 
    }

    whereIsIt(canal);
}*/


//    EXERCISE 11.57
/*#define N 3

void diagonal(int m[][N])
{
    int sum = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(i == j || i == N - 1 - j){
                sum = sum + m[i][j];
            }
        } 
    }
    
    printf("\nThe sum of the diagonals of your matrix is: %d", sum);
}
int main()
{
    int matrix[N][N] = { 0 };
    
    printf("Enter the values of your matrix: ");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    diagonal(matrix);
}*/


//    EXERCISE 11.61
/*#define N 3

void transpose(int a[][N])
{
    
    printf("\nThe matrix' transpose:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    
}
int main()
{
    int matrix[N][N] = { 0 };
    
    for (int i = 0; i < N; i++){
        printf("Enter the row %d (3 numbers): ", i+1);
        for (int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose(matrix);
}*/


//    EXERCISE 11.65
/*#define N 10

void rightUnder(int m[][N])
{
    int smaller = m[N-1][N-1];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(i + j >= N && m[i][j] < smaller){
                smaller = m[i][j];
            }
        }
    }
    printf("\nThe right under tiangle's smaller number: %d", smaller);
}

int main()
{
    int matrix[N][N] = { 0 };
    
    for (int i = 0; i < N; i++){
        printf("Enter the row %d (10 numbers): ", i+1);
        for (int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    rightUnder(matrix);
}*/


//    EXERCISE 11.64
/*#define N 4
#define M 3

void print(int m[][M])
{
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
}

void sort(int m[][M])
{
    int rplcmt;

    for (int pass = 1; pass < N*M; pass++){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M-1; j++){
                if(m[i][j] >  m[i][j+1]){
                    rplcmt = m[i][j];
                    m[i][j] = m[i][j+1];
                    m[i][j+1] = rplcmt;
                }
            }
            
        }
        
    }
    printf("\nThe array sorted:\n");
    print(m);
}

int main()
{
    int matrix[N][M] = { 0 };
    
    for (int i = 0; i < N; i++){
        printf("Enter the row %d (%d numbers): ", i+1, M);
        for (int j = 0; j < M; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The array in disorder:\n");
    print(matrix);
    sort(matrix);
}*/
