#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

/*struct student
{
    char name[10];
    int age;
    char gender;
    int num;

}a[20];

int main()
{
    int studentsN;
    printf("How many students are you going to enter (max:20): ");
    scanf("%d",&studentsN);
    for (int i = 0; i < studentsN; i++)
    {
        printf("Enter the name: ");
        fflush(stdin);
        scanf("%s", &a[i].name);
        printf("How old is the student: ");
        scanf("%d", &a[i].age);
        printf("The student's gender: ");
        fflush(stdin);
        scanf("%c", &a[i].gender);
        printf("The student's number: ");
        scanf("%d", &a[i].num);
    }

    for (int i = 0; i < studentsN; i++)
    {
        printf("%d. student's card:\nName:%s\nAge:%d\nGender:%c\nNum:%d",i+1,a[i].name,a[i].age,a[i].gender,a[i].num);
    }
}*/

//    EXERCISE 16.1
/*struct student
{
    char name[20];
    char surname[20];
    float point;

}a[10];

void read(struct student *ptr,char input[],int i)
{
    sscanf(input,"%[^;];%[^;];",ptr->name,ptr->surname);
}
void write(struct student ptr[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%s %s %.2f\n",ptr->name,ptr->surname,ptr->point);
        ptr++;
    }
}

int main()
{
    char input[30];

    for (int i = 0; i < 10; i++)
    {
        fflush(stdin);
        printf("%d The student's name,surname and notes: ",i+1);
        fgets(input,30,stdin);
        scanf("%f", &a[i].point);
        read(&a[i],input,i);
    }
    printf("-----LIST-----\n");

    write(a);
    
}*/
