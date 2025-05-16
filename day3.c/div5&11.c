#include <stdio.h>

int main()
{
    int num;
    printf("ENTER A NUBMER = ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
      printf("\n\n  The is divide by both 5 & 11 = %d",num);
      else
       printf("\n\n The number %d is not divide by both 5 & 11",num);
    return 0;
}