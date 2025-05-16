#include <stdio.h>

int main()
{
    int num1,num2;
    Printf("Enter TWO numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("\n & result =%d",num1&num2);
    printf("\n | result =%d",num1|num2);
    printf("\n ^ result =%d",num1^num2);
    printf("\n ~ result =%d",~num1,~num2);
    return 0;
}