#include <stdio.h>

int sum(int num,int ex)
{
    if (num==0) 
    {
        return ex;
    } 
    return sum(num/10,ex+num%10);
}
int main()
{
    int num;
    printf("\n ENTER THE NUMBER : ");
    scanf("%d",&num);
    printf("\n SUM OF NUMBER : %d",sum(num,0));
    return 0;
}