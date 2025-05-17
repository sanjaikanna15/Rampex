#include <stdio.h>

int main()
{
    int arr[100];
    int x,max;
    printf("How many numbers you want to enter : ");
    scanf("%d",&x);
    printf("\nEnter the %d number : ",x);
    for(int a=0;a<x;a++)
    {
        scanf("\n%d",&arr[a]);
    }
    printf("\n");
    max = arr[0];
    for (int i=1;i<x;i++) 
    {
      if (arr[i]>max)
      {
        max=arr[i];
      }
    }
    printf("\n%d is greater than all\n", max);
    return 0;
}