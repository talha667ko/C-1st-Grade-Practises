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
