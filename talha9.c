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


//    EXERCISE 12.3
/*void separate(int num, int *oP, int *tP, int *hP, int *thP)
{
    if (num > 0)
    {
        *oP = num %10;
        num = num/10;
    }
    if (num > 0)
    {
        *tP = num %10;
        num = num/10;
    }
    if (num > 0)
    {
        *hP = num %10;
        num = num/10;
    }
    if (num > 0)
    {
        *thP = num %10;
    }
}

int main()
{
    int one = -1;
    int ten = -1;
    int hundred = -1;
    int thousands = -1;
    int num;

    printf("Enter a number (Max 4 digits): ");
    scanf("%d", &num);

    separate(num,&one,&ten,&hundred,&thousands);

    if (one >= 0)
    {
        printf("\nThe ones' digit: %d", one);
    }
    if (ten >= 0)
    {
        printf("\nThe tens' digit: %d", ten);
    }
    if (hundred >= 0)
    {
        printf("\nThe hundreds' digit: %d", hundred);
    }
    if (thousands >= 0)
    {
        printf("\nThe thousands' digit: %d", thousands);
    }
    
}*/


//    EXERCISE 12.5
/*void spin(int *ap,int *bp,int *cp, int *dp, char T)
{
    int rplcmt;

    switch (T)
    {
    case 'H':
    case 'h':
        rplcmt = *dp;
        *dp = *cp;
        *cp = *bp;
        *bp = *ap;
        *ap = rplcmt;
        break;
    case 'R':
    case 'r':
        rplcmt = *ap;
        *ap = *bp;
        *bp = *cp;
        *cp = *dp;
        *dp = rplcmt;
        break;
    default:
        break;
    }


}
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    char turning;
    int howMany;

    printf("Enter natural 4 numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    printf("Wich direction do you wanna spin (hour direction H, reverse R): ");
    scanf(" %c", &turning);

    printf("\nHow many times times do you wanna spin it: ");
    scanf("%d", &howMany);

    printf("\nThe numbers before spinning: %d %d %d %d", num1, num2, num3, num4);
    for (int i = 0; i < howMany; i++){
        spin(&num1,&num2,&num3,&num4,turning);
    }

    printf("\nThe numbers after spinning: %d %d %d %d", num1, num2, num3, num4);
    
    return 0;
}*/


//    EXERCISE 12.7
/*void dissect(int *dp, int *mp, int *yp)
{
    *yp = *dp /365;
    *dp = *dp %365;
    *mp = *dp /30;
    *dp = *dp %30;
}
int main()
{
    int days;
    int months = 0;
    int years = 0;

    printf("Enter the number of days: ");
    scanf("%d", &days);
    dissect(&days,&months,&years);
    printf(" This time is %d year(s), %d month(s), %d day(s).", years, months, days);
}*/



//    EXERCISE 12.9
/*void bipper(int id, char *bp, int *fp, int *wp)
{
    switch (id /1000)
    {
    case 1:
        *bp = 'A';
        break;
    case 2:
        *bp = 'B';
        break;
    case 3:
        *bp = 'C';
        break;
    }

    *fp = (id /10) %100;
    *wp = id %10;
}
int main()
{
    int id;
    char block;
    int flat;
    int which;

    printf("Enter your vehicle's ID: ");
    scanf("%d", &id);

    bipper(id,&block,&flat,&which);
    printf("This belong to the person living in block %c, flat n°%d, and his %d. car.", block, flat, which);
}*/
