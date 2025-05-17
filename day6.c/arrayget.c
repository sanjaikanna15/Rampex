#include <stdio.h>

int main()
{
    int arr[100];
    int x;
    printf("How many numbers you want to enter : ");
    scanf("%d",&x);
    printf("\nEnter the %d number : ",x);
    for(int a=0;a<x;a++)
    {
        scanf("\n%d",&arr[a]);
    }
    printf("\n");
    printf(" the numbers are :");
    for(int b=0;b<x;b++)
    {
        printf("\n%d",arr[b]);
    }
    return 0;
}