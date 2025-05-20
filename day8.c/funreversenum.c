#include <stdio.h>

int reverse(int a)
{
    int rem,rev=0;
    while(a!=0)
    {
     rem=a%10;
     rev=rev*10+rem;
     a=a/10;
    }
    return rev;
}
int main()
{
    printf("\n REVERSE : %d",reverse(123456789));
    return 0;
}