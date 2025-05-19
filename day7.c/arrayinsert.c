#include <stdio.h>

int main()
{
    int arr[10]={1,3,4,5,6,7,8,9,10};
    int place=2,num=2,j=9;
    for(int i=8;i>=1;i--)
    {
        arr[j--]=arr[i];
    }
    arr[place-1]=num;
    for(int k=0;k<=9;k++)
    {
        printf("\n%d",arr[k]);
    }
    return 0;
}