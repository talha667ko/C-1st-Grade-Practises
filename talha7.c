#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>

//     FACTORİAL W FUNCTİON
/*void factorial(int fact){
    
    int reverse = 1;
    for (int i = 1; i <= fact; i++){
        if (fact == 0){
        fact = 1;
        break;}
        reverse = reverse * i; 
    }
    
    fact = reverse;
    printf("The factorial of your number: %d", fact);

}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num);
    return 0;
}*/



//    EXERCISE 9.1
    /*double force(double, double, double);
    int main()
    {

        double objt1;
        double objt2;
        double distance;

        printf("Enter the objects' weights (kg): ");
        scanf("%lf %lf", &objt1, &objt2);
        printf("Enter the distance between the objects (m): ");
        scanf("%lf", &distance);

        printf("\nThe gravitational between these two object is: %f", force(objt1, objt2, distance));

        return 0;
    }
    double force(double M1, double M2, double R)
    {
        float result;
        double G = 6.673*pow(10.0,-11.0);
        result = G*((M1*M2)/(R*R) );
        return result;
    }*/


//    EXERCISE 9.2
    /*float TotalTime (float, int);

    int main()
    {
        float Vfrst;
        int angle;

        printf("Enter the first velocity(m/s): ");
        scanf("%f", &Vfrst);
        printf("Enter the angle (degree): ");
        scanf("%d", &angle);
    
        printf("\nThe object will end his path in %f sec.\n", TotalTime(Vfrst, angle));
    }

    float TotalTime (float V, int alpha)
    {
        return 2*((V*sin(alpha* M_PI/180))/9.80);
    }*/



//    EXERCISE 9.4
/*float Distance(float, int, float);

int main()
{
    float velocity;
    int angle;
    float time;

    printf("Enter the first velocity (m/s): ");
    scanf("%f", &velocity);
    printf("Enter the angle (degree): ");
    scanf("%d", &angle);
    printf("How many time last the object in the air (sec): ");
    scanf("%f", &time);

    printf("\nThe object willnend his path %.2f m away.\n", Distance(velocity, angle, time));
    return 0;
}

float Distance(float V, int aplha, float sec)
{
    return V * cos(aplha * M_PI/180) * sec;
}*/


//    EXERCISE 9.6 NOT DONE
/*float Convert(float);

int main()
{
    float money;

    printf("How many money do you have(TL): ");
    scanf("%f", &money);

    printf("\nYour coins wheigts (kg): %f KG\n", Convert(money));
    return 0;
}

float Convert(float kg)
{
    int one = kg;
    int half;
    int quarter;
    int ten;

    kg = kg - one;
    if(kg >= 0.5)
        half = kg / 0.5;
    printf("%f\n", kg);
    kg = kg - half * 0.5;
    printf("%f\n", kg);
    if (kg >= 0.25)
        quarter = kg / 0.25;
    kg = kg - quarter * 0.25;
    printf("%f\n", kg);
    ten = kg * 10;
    return (one * 8.2 + half * 6.8 + quarter * 4 + ten * 3.15)/1000;
}*/


//    EXERCISE 9.7
/*float Integral(float, float);
float Fx(float, float, float, float, float, float);

int main()
{
    float a;
    float b;

    printf("Enter the value of a and b: ");
    scanf("%f %f", &a, &b);

    Integral(a, b);
}

float Integral(float a, float b)
{
    float Fa = 0;
    float Fb = 0;
    float Fakh = 0;
    float h ;

    h = (b - a)/1000;

    Fx(a, b, Fa, Fb, Fakh, h);

    return 0;
}

float Fx(float a, float b, float Fa, float Fb, float Fakh, float h)
{
    float fx;

    Fa = 3*pow(a,5) + 5*a;
    Fb = 3*pow(b,5) + 5*b;

    for(int k = 1; k <= 999; k++){
        float x = a + k * h;
        fx = 3*pow(x,5) + 5*x;
        Fakh = Fakh + fx;
    }

    int result = h * (Fa/2 + Fakh + Fb/2);
    printf("\nThe value of the Integral between these values is: %d", result);

    return 0;
}*/


//    EXERCISE 9.10
/*int awesomeNum(int, int);

int main()
{
    int start;
    int end;
    printf("Enter the start and the end numbers: ");
    scanf("%d %d", &start, &end);

    awesomeNum(start, end);
}

int awesomeNum(int start, int end)
{

    printf("\nThe awesome number that you are searching: ");
    for(int i = start; i <= end; i++){
        int addition = 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0)
                addition = addition + j;
        }
        if(addition == i)
            printf("%d, ", i);
    }
    return 0;
}*/


//    EXERCISE 9.12
/*int PrimeNum(int, int);

int main()
{
    int start;
    int end;

    printf("Enter the start and the end: ");
    scanf("%d %d", &start, &end);

    PrimeNum(start, end);
}

int PrimeNum(int start, int end)
{
    printf("The prime numbers in your limits are: ");

    for (int i = start; i <= end; i++){
        int flag = 1;
       for (int j = 2; j < i; j++){
        if(i % j == 0){
        flag = 0;
        break;
        }
       }
       if(flag == 1)
       printf("%d, ", i);
    }
    return 0;
}*/


//    EXERCISE 9.13
/*float GrOnsConvert(float, char);

int main()
{
    float value;
    char type;

    printf("Enter the value that you want to convert and his type (\"o\" Ons, \"g\" Gram): ");
    scanf("%f %c", &value, &type);

    GrOnsConvert(value, type);
}

float GrOnsConvert(float value, char type)
{
    switch (type)
    {
    case 'o':
        value = value * 28.3495231;
        type = 'g';
        break;
    case 'g':
        value = value / 28.3495231;
        type = 'o';
        break;
    default:
        printf("\nInvalid option!\n");
        break;
    }
    printf("Your value equals to: %.7f %c\n", value, type);
    return 0;
}*/


//    EXERCISE 9.14
/*int myFunc(int ,int);

int main()
{
    int num1;
    int num2;
    int reserve;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2){
        printf("The numbers are equals, the smallest common diviend is themselves.");
        return 0;
    }

    reserve = num1;
    if(num2 > reserve){
        reserve = num2;
        num2 = num1;
    }

    myFunc(reserve, num2);
    return 0;
}

int myFunc(int reserve, int num2)
{
    printf("\nThe smallest common dividend is: ");
    for (int i = reserve; i > 0; i++){
        if (i % reserve == 0 && i % num2 == 0){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}*/


//    EXERCISE 9.17
/*int GiveaTime(char);

int main()
{
    char Moment;
    printf("What moment of the day is the time from(\"m\" morning, \"a\" afternoon, \"n\" night): ");
    scanf("%c", &Moment);

    GiveaTime(Moment);
}

int GiveaTime(char Moment)
{
    int Hours = 0;
    int Minutes = 0;
    int Seconds = 0;
    srand(time(NULL));
    
    Minutes = 0 + rand() % 59;
    Seconds = 0 + rand() % 59;
    switch (Moment)
    {
    case 'm':
        Hours =rand() % 3 + 8;
        break;
    case 'a':
        Hours =rand() % 4 + 11;
        break;
        case 'n':
        Hours =rand() % 5 + 16;
        break;
    default:
    printf("\nInvalid input\n");
        break;
    }
    printf("The random time of your moment of the day is: %d:%d:%d\n", Hours, Minutes, Seconds);
    return 0;
}*/


//    EXERCISE 9.20
/*char DoAnExo(char);

int main()
{
    char op;
    printf("Choose the operation(\"*\" multiplication, \"/\" division): ");
    scanf("%c", &op);

    DoAnExo(op);
}

char DoAnExo(char op)
{
    int num1 = 0;
    int num2 = 0;
    srand(time(NULL));

    again:
    num1 = rand() % 999 + 1;
    num2 = rand() % 999 + 1;

    switch (op)
    {
    case '*':
        printf("The Question is: %d * %d = ?\n", num1, num2);
        break;
    case '/':
        if (num1 >= num2){
        if(num1 % num2 != 0)
        goto again;
     }
    else{
        if(num2 % num1 != 0)
        goto again;}
        if (num1 >= num2)
         printf("The Question is: %d / %d = ?\n", num1, num2);
        else
        printf("The Question is: %d / %d = ?\n", num2, num1);
        break;
    default:
    printf("\nInvalid operator! Please enter * or /.\n");
        break;
    }
    return 0;
}*/


//    EXERCISE 9.23
/*int ConvertSec(int sec);

int main()
{
    int sec;

    printf("Enter our time in seconds: ");
    scanf("%d", &sec);

    ConvertSec(sec);
}

int ConvertSec(int sec)
{
    int h, m, s;

    h = sec / 3600;
    sec = sec % 3600;
    m = sec / 60;
    sec = sec % 60;
    s = sec;

    printf("\nYour after conversion is(hours:minutes:seconds): %d:%d:%d", h, m, s);
    return 0;
}*/


//    EXERCISE 9.25
/*int theNearestCouple(int, int, int, int, int, int);

int main()
{
    int x1 = 3;
    int y1 = 3;
    int x2 = 7;
    int y2 = 7;
    int x3 = 9;
    int y3 = 9;

    theNearestCouple(x1, x2, x3, y1, y2, y3);
}

int theNearestCouple(int x1, int x2, int x3, int y1, int y2, int y3)
{
    int distance12 = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
    int distance13 = sqrt(pow((x1 - x3),2) + pow((y1 - y3),2));
    int distance23 = sqrt(pow((x3 - x2),2) + pow((y3 - y2),2));

    if(distance12 > distance13 && distance12 > distance23){
        printf("The nearest couple : (%d,%d)-(%d,%d)", x1, y1, x2, y2);
    }
    else if(distance13 > distance12 && distance13 > distance23){
        printf("The nearest couple : (%d,%d)-(%d,%d)", x1, y1, x3, y3);
    }
    else{
        printf("The nearest couple : (%d,%d)-(%d,%d)", x3, y3, x2, y2);
    }
    return 0;
}*/


//    EXERCISE 9.29
/*int tellExcuse(int);
int printMonth(int);
int RandumNum(int);

int main()
{
    int month;
    while(1){
        printf("Enter the month number: ");
        scanf("%d", &month);
        
        tellExcuse(month);
    }
}

int tellExcuse(int month)
{
    int excuse = 0;
    if((month >= 1 && month < 3) || month == 12){
        excuse = rand() % 8 + 3;
        printf("%d", excuse);
    }
    else if (month >= 3 && month < 6){
        while(1)
        {
            RandumNum(excuse);
            if (RandumNum(excuse) >= 3 && RandumNum(excuse) < 6)
            continue;
            else
            break;
        }
    }
    else if (month >= 6 && month < 9){
       while(1)
        {
            RandumNum(excuse);
            if (RandumNum(excuse) >= 6 && RandumNum(excuse) < 9)
            continue;
            else
            break;
        }
    }
    else if (month >= 9 && month < 12){
        while(1)
        {
            RandumNum(excuse);
            if (RandumNum(excuse) >= 9 && RandumNum(excuse) < 12)
            continue;
            else
            break;
        }
    }
    else
        printf("You enterde a wrong number!");

    printMonth(excuse);

    return 0;
}
int RandumNum(int excuse)
{
    srand(time(NULL));
    excuse = rand() % 11 + 1;
    printf("%d", excuse);
    return excuse;
}

int printMonth(int excuse)
{
    if((excuse > 0 && excuse < 3) || excuse == 12){
        printf("We'll go in the Winter\n");
    }
    else if (excuse >= 3 && excuse < 6){
        printf("We'll go in the Spring\n");
    }
    else if (excuse >= 6 && excuse < 9){
        printf("We'll go in the Summer\n");
    }
    else if (excuse >= 9 && excuse < 12){
        printf("We'll go in the Autumn\n");
    }
    return 0;
}*/


//    EXERCISE 9.28
/*int randomNUM(int);
int tellExcuse(int);

int main()
{
    int country;

    printf("America (1)\nJapan (2)\nSpain (3)\nFrance (4)\nRussia (5)\nQatar (6)\nGermany (7)\nEngland (8)\nChina (9)\nTurkiye (10)\n");
    
    while(1){
    printf("\nEnter a number: ");
    scanf("%d", &country);

    randomNUM(country);
    }
}

int randomNUM(int country)
{
    int num = 0;
    time_t t = time(NULL);
    srand((unsigned long) t);
    while(1){
        num = rand() % 9 + 1;
        if (num != country){
            break;
        }
    }
    country = num;
    tellExcuse(country);
    return 0;
}

int tellExcuse(int country)
{
    switch(country) {
        case 1:
        printf("It's America's fault");
        break;
        case 2:
        printf("It's Japan's fault");
        break;
        case 3:
        printf("It's Spain's fault");
        break;
        case 4:
        printf("It's the France's fault");
        break;
        case 5:
        printf("It's the Russia's fault");
        break;
        case 6:
        printf("It's the Qatar's fault");
        break;
        case 7:
        printf("It's the Germany's fault");
        break;
        case 8:
        printf("It's the UK's fault");
        break;
        case 9:
        printf("It's China's fault");
        break;
        case 10:
        printf("It's the Turkiye's fault");
        break;
    }
}*/

//    EXERCISE 9.30
/*int primeNum(int,char);

int main()
{
    int num;
    char choice;

    printf("You want the Greater 'g' or the Smaller 's' prime number: ");
    scanf("%c", &choice);

    printf("Enter the number: ");
    scanf("%d", &num);
    
    primeNum(num, choice);
}

int primeNum(int num, char choice)
{
    switch (choice)
    {
    case 'g':
        for (int i = num+1; i > 0; i++){
            int flag = 0;
                for (int j = 2; j < i; j++){
                    if (i % j == 0){
                    flag = 1;
                    break;}
                }
            if(flag == 0){
                printf("%d\n", i);
                break;}
        }
        break;
    case 's':
        for (int i = num-1; i > 0; i--){
            int flag = 0;
            for (int j = 2; j < i; j++){
                if (i % j == 0){
                    flag = 1;
                    break;}
            }
            if(flag == 0){
            printf("%d\n", i);
            break;}
        }
        break;
    }
    return 0;
}*/


//    EXERCISE 9.35
/*int Area(int,int,int,int);

int main()
{
    int x1, x2, y1, y2;

    printf("Enter the coordinates of the point 1 (x,y): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the point 2 (x,y): ");
    scanf("%d %d", &x2, &y2);

    Area(x1, y1, x2, y2);
}

int Area(int x1, int y1, int x2, int y2)
{
    int face1 = abs(x1) + abs(x2);
    int face2 = abs(y1) + abs(y2);
    int area = face1 * face2;

    printf("The area is : %d", area);
    return 0;
}*/



//    EXERCISE 9.37
/*int backwards(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    backwards(num);
}

int backwards(num)
{
    int digit; 
    while(num > 0){
        digit = num % 10;
        printf("%d", digit);
        num = num / 10;
    }
}*/


//    EXERCISE 9.48
/*int findDigit(int,int);

int main()
{
    int num;
    int digit;

    printf("Enter the number and the digit that you are searching: ");
    scanf("%d %d", &num, &digit);

    findDigit(num,digit);
}

int findDigit(int num, int digit)
{
    int a = 0;
    while(num > 0){
        int check ;
        check = num % 10;
        if(check == digit)
            a = a + 1;
        num = num /10;
    }

    printf("Your digit is in the number %d many times.", a);
}*/


int randomPoint(int,int,int,int);

int main()
{
    int x1, x2, y1, y2;

    printf("Enter the first point's coordinates (x,y): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second point's coordinates (x,y): ");
    scanf("%d %d", &x2, &y2);

    randomPoint(x1,y1,x2,y2);
}

int randomPoint(int x1,int y1,int x2,int y2)
{
    int yedek;
    srand(time(NULL));
    
    yedek

    printf("%d %d", x1, x2);
}
