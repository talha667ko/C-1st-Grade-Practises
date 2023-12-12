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
    /*float TotalTime (float, float);

    int main()
    {
        float Vfrst;
        float angle;

        printf("Enter the first velocity(m/s): ");
        scanf("%f", &Vfrst);
        printf("Enter the angle (degree): ");
        scanf("%f", &angle);
    
        printf("\nThe object will end his path in %f sec.\n", TotalTime(Vfrst, angle));
    }

    float TotalTime (float V, float alpha)
    {
        return 2*((V*sin(alpha* M_PI/180))/9.80);
    }*/
