#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number= ");
    scanf("%d",&num);
    if(num>0)
     printf("\n\n THE NUMBER IS POSITIVE [+]");
     else if(num<0)
       printf("\n\n THE NUMBER IS NEGATIVE [-]");
        else 
         printf("\n\n THE NUMBER IS ZERO");
    return 0;
}