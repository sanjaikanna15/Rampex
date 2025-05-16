#include <stdio.h>

int main()
{
    int n=1;
    printf("EVEN NUMBERS BETWEEN 1 TO 50 \n");
    while(n<=50)
     {
         if(n%2==0)
         {
         printf("\n %d",n);
         }
         n++;
     }
    return 0;
}