#include <stdio.h>

int fibo(int num)
{
    if (num == 0) 
    {
        return 0;
    } else if (num == 1) 
    {
        return 1;
    }
    else
    {
        return fibo(num-1)+fibo(num-2);
    }
}
int main()
{
    printf("\n result : %d ",fibo(4));
    return 0;
}