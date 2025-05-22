#include <stdio.h>

int reverse(int num,int rev)
{
    if (num==0) 
    {
        return rev;
    } 
    return reverse(num/10,rev*10+num%10);
}
int main()
{
    int num;
    printf("\n ENTER THE NUMBER : ");
    scanf("%d",&num);
    printf("\n REVERSE NUMBER : %d",reverse(num,0));
    return 0;
}