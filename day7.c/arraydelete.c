#include <stdio.h>

int main(){
    int arr[6]={48,76,32,12,42};
    int n=5,i,pos=2;
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("The deleted value is:");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}