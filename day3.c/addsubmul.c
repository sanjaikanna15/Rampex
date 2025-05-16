#include <stdio.h>

int main()
{
    int num1,num2,op;
    printf("Enter any two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("\n\n Enter your operation[+=1,-=2,*=3,/=4,%=5]= ");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
         printf("\n Add %d and %d= %d",num1,num2,num1+num2);
         break;
        case 2:
         printf("\n sub %d and %d= %d",num1,num2,num1-num2);
         break;
        case 3:
         printf("\n mult %d and %d= %d",num1,num2,num1*num2);
         break;
        case 4:
         printf("\n div %d and %d= %d",num1,num2,num1/num2);
         break;
        case 5:
         printf("\n mod %d and %d= %d",num1,num2,num1%num2);
         break;
        default:
         printf("\n\n ERROR----------- \n WRONG INPUT");
        break;
    }
    return 0;
}