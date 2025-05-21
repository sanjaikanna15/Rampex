#include <stdio.h>

int palindrome(int num)
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
    if(num==palindrome(num))
    printf("\n THE NUMBER IS PALINDROME ");
    else
    printf("\n THE NUMBER IS NOT PALINDROME ");
    return 0;
}