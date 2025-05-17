#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3]={1,2,3},b[4]={1,2,3,4};
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=3;j++)
        {
         printf("\n%d %d",a[i],b[j]);
        }
    }
    printf("\n");
    return 0;
  }