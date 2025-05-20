#include <stdio.h>

long int factorial(long int num)
{
    long int fac=1;
    while(num>=1)
    {
        fac=fac * num;
        num--;
    }
    return fac;
}
int main()
{
    printf("\n FACTORIAL IS : %ld ",factorial(16));
    return 0;
}