#include <stdio.h>

int main()
{
   int tem;
   printf("ENTER TEMPERATURE :  ");
   scanf("%d",&tem);
   if(tem<10)
    printf("\n\n   WEAR JACKET");
    else if(tem>=10&&tem<=20)
        printf("\n\n  WEAR SWEATER");
        else if(tem>20)
              printf("\n\n  WEAR T-SHIRT");
              else 
              printf("\n\n    ERROR-------------");
return 0;
}