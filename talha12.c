#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*#define fileway "text.txt"

typedef struct Bank_account{
    char Iban[8];
    char ID[10];
    float money;
}Account;
void money_storage(struct Bank_account *bptr)
{
    FILE *fptr;
    fptr = fopen(fileway, "r");
    if(fptr == NULL)
        printf("The file haven't been open!!\n");

    char str[200];
    char *sentence;
    while(fgets(str,100,fptr) != NULL){
            sentence = strtok(str," ");
            strcpy(bptr->ID,sentence);
            sentence = strtok(NULL," ");
            strcpy(bptr->Iban,sentence);
            sentence = strtok(NULL," ");
            bptr->money = atof(sentence);
            bptr++;
    }
    fclose(fptr);
}
void money_exchange(struct Bank_account *bptr)
{
    char sending[8];
    char reciving[8];
    float mny;
    printf("From who want you transfer (IBAN):");
    scanf("%s",&sending);
    printf("To who want you transfer (IBAN):");
    fflush(stdin);
    scanf("%s",&reciving);
    printf("How many money want you transfer:");
    scanf("%f",&mny);

    for(int y=0; y <3;y++){
        if(strcmp(sending,bptr->Iban) == 0)
            bptr->money = bptr->money - mny;

        if(strcmp(reciving,bptr->Iban) == 0)
            bptr->money = bptr->money + mny;
            bptr++;
    }
}
void update(struct Bank_account *bptr)
{
    FILE *fptr;
    fptr = fopen(fileway, "w");
    if(fptr == NULL)
        printf("The file haven't been open!!\n");

    for(int y=0; y < 3; y++){
        fprintf(fptr,"%s %s %f\n",bptr->ID,bptr->Iban,bptr->money);
        bptr++;
    }
    fclose(fptr);
}
int main()
{
    Account compte[3];

    money_storage(&compte);
    money_exchange(&compte);
    update(compte);

    return 0;
}*/


/*#define filename "test2.txt"

typedef struct Student{
    char name[10];
    char surname[10];
    float point;
    int num;
}Information;

void add_student(struct Student *iptr, int x)
{
    iptr = iptr + x;
    printf("\nEnter the name:");
    fflush(stdin);
    scanf("%s", iptr->name);
    printf("Enter the surname:");
    fflush(stdin);
    scanf("%s", iptr->surname);
    printf("The no:");
    scanf("%d",&iptr->num);
    printf("His point:");
    scanf("%f",&iptr->point);

}
void write(struct Student *iptr, int x)
{
    for(int i=0; i<x; i++){
        printf("\n%d. Student",i+1);
        printf("\nName: %s",iptr[i].name);
        printf("\nSurname: %s",iptr[i].surname);
        printf("\nNO: %d",iptr[i].num);
        printf("\nPoint: %.2f",iptr[i].point);
    }
}
void change_point(struct Student *iptr, int x)
{
    int TheS;
    printf("Which student's do you wanna change (NO):");
    scanf("%d",&TheS);
    for(int i=0; i<x; i++){
        if(TheS == iptr[i].num){
            printf("%s %s actual point: %.2f.",iptr[i].name,iptr[i].surname,iptr[i].point);
            printf("\nHis new note:");
            scanf("%f",&iptr[i].point);
            break;
        }
    }
}
void print_file(struct Student *iptr, int x)
{
    FILE *fptr;

    if(((fptr = fopen(filename, "w")) == NULL))
        printf("The file couldn't be opened!");

    for(int i=0; i<x;){
        fprintf(fptr,"|               |  %d. Student  |  %d. Student  |  %d. Student  |\n",i+1,i+2,i+3);
        fprintf(fptr,"|Name:          |%15s|%15s|%15s|\n",iptr[i].name,iptr[i+1].name,iptr[i+2].name);
        fprintf(fptr,"|Surname:       |%15s|%15s|%15s|\n",iptr[i].surname,iptr[i+1].surname,iptr[i+2].surname);
        fprintf(fptr,"|NO:            |%15d|%15d|%15d|\n",iptr[i].num,iptr[i+1].num,iptr[i+2].num);
        fprintf(fptr,"|Note:          |%15.2f|%15.2f|%15.2f|\n",iptr[i].point,iptr[i+1].point,iptr[i+2].point);
        i = i+3;
    }
}
int main()
{
    int choice;
    Information info[10];
    int x =0;
    while(1){
        printf("\n--------------------");
        printf("\n1. Add student\n2. Show the list\n3. Changing a student's point\n4. Save informations\n5. Exit\nYour choice: ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            add_student(&info,x);
            x++;
            break;
        case 2:
            write(&info,x);
            break;
        case 3:
            change_point(&info,x);
            break;
        case 4:
            print_file(&info,x);
            break;
        case 5:
            printf("\nExiting the program!...");
            return 0;
            break;
        default:
            printf("\nERROR try again.");
            continue;
        }
    }
    return 0;
}*/
