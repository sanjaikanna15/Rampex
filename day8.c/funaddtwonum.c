#include <stdio.h>

int add()
{
    int a,b;
    printf("ENTER TWO NUMBERS : ");
    scanf("%d %d",&a,&b);
    printf("\n ADDITION OF %d + %d =%d",a,b,a+b);
    return 0;
}

int main()
{
    add();
    return 0;
}