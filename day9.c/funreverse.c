#include <stdio.h>

int reverse(int num)
{
    int rev=0;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
}
int main()
{
    int num;
    printf("\n ENTER NUMBER : ");
    scanf("%d",&num);
    printf("\n THE REVERSE NUMBER : %d ",reverse(num));
    return 0;
}