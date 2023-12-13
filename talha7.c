#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
