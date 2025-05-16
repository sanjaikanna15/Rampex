#include <stdio.h>

int main()
{
    int t,n;
    printf("ENTER THE TABLE = ");
    scanf("%d",&t);
    for(n=1;n<=10;n++)
    {
      printf("\n %d * %d = %d",n,t,t*n);
    }
    return 0;
}