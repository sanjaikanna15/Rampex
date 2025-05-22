#include <stdio.h>

int num(int n)
{
    if(n==0)
    {
        return 0;
    }
    printf("\n %d",n);
    return num(n-1);
}
int main()
{
    int n;
    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&n);
    printf("\n NUMBER FROM n TO 1 \n");
    num(n);
    return 0;
}