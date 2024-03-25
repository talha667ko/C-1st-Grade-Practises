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


//    EXERCISE 12.11
/*void purchase(float price, float *mp, int *op, int *hp, int *qp)
{
    *op = floor(*mp / price);
    *mp = *mp - (*op * price);
    *hp = floor(*mp / (price /2));
    *mp = *mp - (*hp * (price /2));
    *qp = floor(*mp / (price /4));
    *mp = *mp - (*qp * (price /4));
}
int main()
{
    int one = 0;
    int half = 0;
    int quarter = 0;
    float money;
    float price;

    printf("How many do you have (€): ");
    scanf("%f", &money);
    printf("How many cost one gold: ");
    scanf("%f", &price);

    purchase(price,&money,&one,&half,&quarter);
    printf("You can purchase %d full gold, %d half gold, %d quarter gold.", one, half, quarter);
    printf("\nYour overage: %.2f€", money);
}*/


//    EXERCISE 12.15
/*void eggNumbers(char g, int num, int C[], int *ep)
{
    *ep = (num *100)/90;
    switch (g)
    {
    case 'M':
        C[0] = 28;
        C[1] = 31;
        break;
    case 'F':
        C[0] = 33;
        C[1] = 34;
        break;
    }
}
int main()
{
    char gender;
    int num;
    int degree[2];
    int eggs;

    printf("What gender do you want you tadpole to be (M)ale, (F)emale: ");
    scanf("%c", &gender);
    printf("How many tadpole do you want: ");
    scanf("%d", &num);

    eggNumbers(gender,num,degree,&eggs);
    printf("\nThe nest's degree (°C): %d °C - %d °C", degree[0], degree[1]);
    printf("\nHow many eggs you need to put in the nest: %d", eggs);
}*/


//    EXERCISE 12.16
/*void Tour(int p, int *bp, int *sp)
{
    *bp = p /46;
    if(p %46 > 0)
    *bp = *bp +1;

    *sp = (*bp *46)- p;
}
int main()
{
    int people;
    int bus = 0;
    int seat;

    printf("How many people will be in the tour: ");
    scanf("%d", &people);

    Tour(people,&bus,&seat);
    printf("\nThe tour needs %d bus.", bus);
    printf("\nThe empty seat is %d.", seat);
}*/


//    EERCISE 12.17
/*void digit(int num, int *gp, int *sp)
{
    *gp = num %10;
    *sp = num %10;
    num = num /10;

    while (num > 0)
    {
        if(*gp < num %10)
        *gp = num %10;
        if(*sp > num %10)
        *sp = num %10;

        num = num /10;
    }
    
}
int main()
{
    int number;
    int digitG;
    int digitS;

    printf("Enter a number: ");
    scanf("%d", &number);

    digit(number,&digitG,&digitS);
    printf("\nGreatest digit: %d", digitG);
    printf("\nSmallest digit: %d", digitS);
}*/


//	EXERCISE 12.19
/*void greater(int d1, int d2, int *dg, int m1, int m2, int *mg, int y1, int y2, int *yg)
{
    if (y1 > y2 && m1 > m2 && d1 > d2){
        *dg = d1;
        *mg = m1;
        *yg = y1;
    }
    else{
        *dg = d2;
        *mg = m2;
        *yg = y2;
    }
}

int main()
{
    int day1;
    int month1;
    int year1;
    int day2;
    int month2;
    int year2;
    int dayg;
    int monthg;
    int yearg;

    printf("Enter the first date: ");
    scanf("%d %d %d", &day1, &month1, &year1);

    printf("Enter the second date: ");
    scanf("%d %d %d", &day2, &month2, &year2);
    greater(day1,day2,&dayg,month1,month2,&monthg,year1,year2,&yearg);
    printf("The greater date is: %d / %d / %d", dayg, monthg, yearg);
}*/


//	EXERCISE 12.24
/*void permutCombin(int n, int r, double *p, double *c)
{
    int nfact = 1;
    int rfact = 1;
    int NminusRf = 1;
    int NminR = n - r;

    while (n > 0)
    {
        nfact = nfact * n;
        n--;
    }
    while (r > 0)
    {
        rfact = rfact * r;
        r--;
    }
    while (NminR > 0)
    {
        NminusRf = NminusRf * NminR;
        NminR--;
    }
    
    *p = nfact / NminusRf;
    *c = *p / rfact;
}
int main()
{
    int n = 3, r = 2;
    double p = 0,c = 0;

    permutCombin(n,r,&p,&c);
    printf("Permutation: %.1f\n"
           "Combination: %.1f\n", p, c);
    return 0;

}*/


//	EXERCISE 12.25
/*void primeNUM(int *np)
{
    int test = 1;

    if(*np == 1)
        test = 0;
    for(int j = *np +1; ; j++){
        test = 1;
        for (int i = j -1; i > 1 && test == 1; i--){
            if(j % i == 0)
                test = 0;
        }
        if(test){
            *np = j;
            break;}
    }
    
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    primeNUM(&num);
    printf("Your num has become the prime number : %d", num);
}*/

//    EXERCISE 12.26
/*void simplify(int *one, int *two)
{
    for (int i = 1; i <= *one && i <= *two; i++)
    {
        if (*one % i == 0 && *two % i == 0)
        {
            *one = *one /i;
            *two = *two /i;
        }
    }
}
int main()
{
    int num1;
    int num2;

    printf("Enter the divided and the divider: ");
    scanf("%d %d", &num1, &num2);

    printf("\nThe first apperence of your division: %d / %d", num1, num2);
    simplify(&num1,&num2);
    printf("\nYor division simpliflied: %d / %d", num1, num2);
}*/
