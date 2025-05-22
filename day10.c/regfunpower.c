#include <stdio.h>

int power(int base, int pow)
{
    if (pow == 0)
    {
        return 1;  
    }
    if (pow < 0) 
    {
        return 1; 
     }
    return base * power(base, pow - 1); 
}
int main()
{
    int n,p;
    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&n);
    printf("\n ENTER POWER : ");
    scanf("%d",&p);
    printf("\n RESULT : %d ",power(n,p));
    return 0;
}