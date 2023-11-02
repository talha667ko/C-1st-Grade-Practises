#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int b=0;
    int c=0;
    printf("onunde iki yol var. 1.yol turkiyede dogmak. 2. yol fransada dogmak : ");
    scanf("%d",&a);
    if (a==2)
        printf("2 yi sectin problem yok: ");
    else
    {
        printf("boku yedin . onunde iki yol var 1 zengin ailede dogmak 2 fakir ailede dogmak: ");
     scanf("%d",&b);
     if (b==1)
        printf("sikinti yok");
     else
     {
      printf("hepten sictin. onunde 2 yol var 1 zeki olup kurtulmak 2 mal olmak: ");
      scanf("%d",&c);
      if (c==1)
        printf("biraz iyi kafayi calistir kurtul");
      else
        printf("geber knk yapcak bisi yok: ");

     }
    }
    return 0;
}

