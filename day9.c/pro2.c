#include <stdio.h>

int sum(int num)
{
    int temp=0;
    for(int i=1;i<=8;i++)
    {
        if(num%i==0)
        {
            temp=temp+i;
        }
    }
    return temp;
}
int main()
{
    printf("\nSum of Numbers  are: %d ",sum(8));
    return 0;
}