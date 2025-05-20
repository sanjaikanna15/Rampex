#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}
int main()
{
    printf("\n ADD =%d",add(5,5));
    printf("\n SUB =%d",sub(10,5));
    printf("\n MUL =%d",mul(25,25));
    printf("\n DIV =%.2f",div(22,5));
    return 0;
}