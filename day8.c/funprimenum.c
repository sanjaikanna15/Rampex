#include <stdio.h>

int prime_number(int num)
{
    int isprime=1;
    if(num<=1)
    {
    printf("\nERROR----");
    return 0;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            isprime=0;
        }

    }
    return isprime;
}
int main()
{
    if(prime_number(2)==1)
    printf("\n THE NUMBER IS PRIME NUMBER");
    else
    printf("\n THE NUMBER IS NOT A PRIME NUMBER");
    return 0;
}