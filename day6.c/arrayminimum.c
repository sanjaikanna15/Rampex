#include <stdio.h>

int main()
{
    int arr[100];
    int x,min;
    printf("How many numbers you want to enter : ");
    scanf("%d",&x);
    printf("\nEnter the %d number : ",x);
    for(int a=0;a<x;a++)
    {
        scanf("\n%d",&arr[a]);
    }
    printf("\n");
    min = arr[0];
    for (int i=1;i<x;i++) 
    {
      if (arr[i]<min)
      {
        min=arr[i];
      }
    }
    printf("\n%d is less than all\n", min);
    return 0;
}