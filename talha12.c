#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define fileway "text.txt"

typedef struct Bank_account{
    char Iban[8];
    int ID[10];
    float money;
}Account;
void money_storage(struct Bank_account *bptr)
{

    while(fscanf(bptr,"%d %s %f",bptr->ID,bptr->Iban,bptr->money) != NULL){
            fscanf(bptr,"%d %s %f",bptr->ID,bptr->Iban,&bptr->money);
            bptr++;
    }

}
void money_exchange(struct Bank_account *bptr)
{
    char sending[8];
    char reciving[8];
    float mny;
    printf("From who want you transfer (IBAN):");
    fgets(sending,8,stdin);
    printf("To who want you transfer (IBAN):");
    fflush(stdin);
    fgets(reciving,8,stdin);
    printf("How many money want you transfer:");
    scanf("%f",&mny);

    

}
int main()
{
    Account compte[3];
    FILE *fptr;
    fptr = fopen(fileway, "r");

    if(fptr == NULL)
        printf("The file haven't been open!!\n");

    money_storage(&compte);
    fptr = fopen(fileway, "r");
    money_exchange(&compte);

    fclose(fptr);
    return 0;
}
