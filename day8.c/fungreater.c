#include <stdio.h>

int greater(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    if(b>a && b>c)
    {
        return b;
    }
    if(c>a && c>b)
    {
        return c;
    }
    else
    {
        printf("\n EQUAL NUMBERS ");
        return 0;
    }
    return 0;
}
int main()
{
    printf("\n GREATEST NUMBER IS %d",greater(10,20,80));
    return 0;
}