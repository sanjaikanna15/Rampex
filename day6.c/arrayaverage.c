#include <stdio.h>

int main()
{
    int arr[100];
    int x,total=0;
    float avg;
    printf("How many numbers you want to enter : ");
    scanf("%d",&x);
    printf("\nEnter the %d number : ",x);
    for(int a=0;a<x;a++)
    {
        scanf("\n%d",&arr[a]);
    }
    printf("\n");
    for (int i=0;i<x;i++) 
      {
        total+=arr[i];
      }
    printf("\n%d sum of the numbers : \n",total);
    avg=total/x;
    printf("\n average : %.2f",avg);
    return 0;
}