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


//    EXERCISE 12.27
/*void findApoint(int mx, int my, int r, int *x, int *y)
{
    labe:
    *x = rand() %20;
    *y = rand() %20;

    if (sqrt(pow((mx-*x),2) + pow((my-*y),2)) <= 6)
    {
        printf("%f\n", sqrt(pow((mx-*x),2) + pow((my-*y),2)));
    }
    else
    goto labe;
    
}
int main()
{
    srand(time(NULL));
    int mx =2, my =5, r =6;
    int x, y;

    findApoint(mx,my,r,&x,&y);
    printf("\nx,y = %d , %d", x, y);
}*/


//    EXERCISE 
/*int countLetter(const char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++){

    }
    return i;
}

void unify(char *s1, const char *s2, int n1, int n2)
{
    int j = 0;
    for (int i = n1-1; i < n1+n2+1; i++)
    {
        s1[i] = s2[j];
        j++;
    }
    
}

int main()
{
    char str1[200];
    char str2[100];
    int str1_N;
    int str2_N;

    printf("Enter the 1st sentence: ");
    fgets(str1,200,stdin);
    printf("Enter the 2nd sentence: ");
    fgets(str2,100,stdin);

    str1_N = countLetter(str1);
    str2_N = countLetter(str2);

    unify(str1,str2,str1_N,str2_N);
    printf("The sentences unified: ");
    puts(str1);
    return 0;
}*/

void convert(const char frst[],const char result[], char m[])
{
    float measure;
    int f = atoi(frst);
    int r = atoi(result);
    printf("\n%d %d",f,r);
    measure = atof(m);
    switch (f)
    {
    case 216:
        switch (r)
        {
        case 109:
            measure = measure *1000;
            break;
        case 'mm':
            measure = measure *1000000;
            break;
        default:
            printf("\nYou have enterend a wrong unit (2).");
            break;
        }
        break;
    case 'm':
        switch (r)
        {
        case 'km':
            measure = measure /1000;
            break;
        case 'mm':
            measure = measure *1000;
            break;
        default:
            printf("\nYou have enterend a wrong unit (2).");
            break;
        }
        break;
    case 'mm':
        switch (r)
        {
        case 'm':
            measure = measure /1000;
            break;
        case 'km':
            measure = measure /1000000;
            break;
        default:
            printf("\nYou have enterend a wrong unit (2).");
            break;
        }
        break;
    default:
        printf("\nYou have enterend a wrong unit (1).");
        break;
    }

    printf("\n%s%s, is %.2f%s.",m, frst,measure,result);
    
}

void stating(char h[], char frst[], char result[], char m[])
{
    int space = 0;
    int j = 0;
    int k = 0;
    for (int i = 0; h[i] != '\0'; i++)
    {
        if (isdigit(h[i]) && space == 0)
        {
            m[i] = h[i];
        }
        else if (isalpha(h[i]) && space == 0)
        {
            frst[j] = h[i];
            j++;
        }
        
        if (isspace(h[i]))
        {
            space++;
        }
        if (isalpha(h[i]) && space == 3)
        {
            result[k] = h[i];
            k++;
            printf("3.%c", h[i]);
        }
    }
    
    printf("\n%s  %s  %s", frst,result,m);
}

int main()
{
    char heights[50];
    char first[2];
    char final[2];
    char measure[10];

    printf("Enter your question: ");
    //  The question have to be wrotten alike: "Xm how many km"
    fgets(heights,50,stdin);

    stating(heights,first,final,measure);
    convert(first,final,measure);

    return 0;
}

//    ASCII Table***
/*int main() 
{
    char s1[200];
    for (int i = 0; i < 32; i++)
    {
        int column1 = i;
        int column2 = i+32;
        int column3 = i+64;
        int column4 = i+96;

        if(!isprint(column1)){
            column1 = ' ';
        }
        if(!isprint(column2)){
            column2 = ' ';
        }
        if(!isprint(column3)){
            column3 = ' ';
        }
        if(!isprint(column4)){
            column4 = ' ';
        }
        sprintf(s1,"|%5d|%5c||%5d|%5c||%5d|%5c||%5d|%5c|", i,column1,i+32,column2,i+64,column3,i+96,column4);
        puts(s1);
    }
    return 0;
}*/

//    NUMBER CHARACTERISTICS TABLE***
/*int prime(int x)
{
    if(x < 2)
        return 1;
    
    int flag=0;
    for (int i = x-1; i>1; i--)
    {
        if(x%i == 0 && x != i)
        flag = 1;

        if(flag)
        return 0;
    }

    return 1;
}

int main() 
{
    char s1[200];
    for (int i = 1; i < 101; i++)
    {
        char s1[150];
        int inum;
        float fnum;
        char features[10];
        char sign[5];
        
        if(prime(i)){
            fnum = (float) i*i;
            inum = i*i;
            sprintf(features,"Primar");
            sprintf(sign,"^^");
        }
        else if(i%2 != 0){
            fnum = (float) i /2;
            inum = i /2;
            sprintf(features,"Odd");
            sprintf(sign,"//");
        }
        else if(i%2 == 0){
            fnum = (float)i*2;
            inum = i*2;
            sprintf(features,"Pair");
            sprintf(sign,"><");
        }

        sprintf(s1,"|%3d(%6s)|...%s...|%5d|..>>..|%10.4f|",i,features,sign,inum,fnum);
        puts(s1);
    }
    return 0;
}*/
