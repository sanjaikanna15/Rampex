#include <stdio.h>

int main()
{
    int arr[100];
    int x,temp;
    printf("How many numbers you want to enter : ");
    scanf("%d",&x);
    printf("\nEnter the %d number : ",x);
    for(int a=0;a<x;a++)
    {
        scanf("\n%d",&arr[a]);
    }
    printf("\n");
    for(int b=0;b<x;b++)
    {
        for(int c=b+1;c<x;c++)
        {
            if(arr[b]<arr[c])
            {
                temp=arr[b];
                arr[b]=arr[c];
                arr[c]=temp;
            }
        }
    }
    printf("Bubble sort max to min : ");
    for(int d=0;d<x;d++)
    {
      printf(" %d",arr[d]);
    }
    return 0;
}