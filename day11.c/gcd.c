#include <stdio.h>

int gcd(int num1,int num2)
{
    if(num2==0)
    {
        return num1;
    }
    return gcd(num2,num1%num2);
}
int main()
{
    int n1,n2,result;
    printf("ENTER TWO NUMBER : ");
    scanf(" %d %d",&n1,&n2);
    result=gcd(n1,n2);
    printf("gcd of number %d and %d : %d",n1,n2,result);
    return 0;
}