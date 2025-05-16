#include <stdio.h>

int main()
{
    int var1,var2;
    printf("Enter two number: ");
    scanf("%d %d",&var1,&var2);
    if(var1>var2)
    printf("\n %d is greater than %d",var1,var2);
    else if(var2>var1)
     printf("\n %d is greater than %d",var2,var1);
     else
      printf("\n Both are equal");
      return 0;
}