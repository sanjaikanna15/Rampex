#include <stdio.h>

int main()
{
    int var1,var2,var3;
    printf("Enter three number: ");
    scanf("%d %d %d",&var1,&var2,&var3);
    if(var1>var2 && var1>3)
    printf("\n %d is greater than %d and %d ",var1,var2,var3);
    else if(var2>var1 && var2>var3)
     printf("\n %d is greater than %d and %d",var2,var1,var3);
     else if(var3>var1 && var3>var2)
     printf("\n %d is greater than %d and %d",var3,var1,var2);
     else
      printf("\n Three are equal");
      return 0;
}