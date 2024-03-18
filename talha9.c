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
