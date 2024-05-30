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
