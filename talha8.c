#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
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
}
