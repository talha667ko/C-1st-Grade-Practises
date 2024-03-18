#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//  EXERCISE 12.1
/*void sort(double *ap, double *bp, double *cp)
{
    double smaller = *ap;
    double sorting[3] = { 0 };
    
    sorting[0] = *ap;
    sorting[1] = *bp;
    sorting[2] = *cp;
    for (int pass = 1; pass < 3; pass++){
        for (int i = 0; i < 3-1; i++){
            if(sorting[i+1] < sorting[i]){
                smaller = sorting[i+1];
                sorting[i+1] = sorting[i];
                sorting[i] = smaller;
            }
        }
    }
    
    *ap = sorting[0];
    *bp = sorting[1];
    *cp = sorting[2];
    
    
    
}
int main()
{
    double a = 3.14, b = 4.56, c = 2.1;

    sort(&a, &b, &c);
    printf("Sorted: %.2f, %.2f, %.2f.", a, b, c);
    return 0;
}*/


//    EXERCISE 12.2
/*#define N 3
int searching(int *vP, int ar[][N], int *rP, int *cP)
{

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(ar[i][j] == *vP){
                *rP = i;
                *cP = j;
                return 1;
            }
        }
        
    }
    return 0;
}

void produce(int ar[][N])
{
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            ar[i][j] = rand() % 11;
        }
        
    }
    
}
int main()
{
    srand(time(NULL));
    int value;
    int row;
    int column;
    int array[N][N] = {0};

    produce(array);
    printf("Enter the value that you're searching: ");
    scanf("%d", &value);

    if(searching(&value, array,&row,&column) == 1){
        printf("Your value is in the matrix.");
        printf("\nYour value is at the %d. row and %d. column.", row, column);
    }
    else
    printf("Your value isn't in the matrix.");

}*/
