#include <stdio.h>

int mul(int num1,int num2)
{
    int result=1;
    for(int i=1;i<=num2;i++)
    {
        result=result*num1;
    }
    return result;
}
int main()
{
    printf("\n Result is : %d ",mul(2,4));
    return 0;
}