#include <stdio.h>
int main(){
    int arr[]={2,4,5,6,8};
    int *p=arr;
    for(int i=4;i>=0;i--)
    printf("%d ",*(p+i));
    return 0;
}