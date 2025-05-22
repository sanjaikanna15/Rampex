#include <stdio.h>

int fun(int num)
{
    int exam=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            exam=exam+i;
        }
    }
     if(num==exam)
        {
        printf("\n true");
        }
        else
        {
        printf("\n false");
        }
    return 0;
}
int main()
{
    fun(28);
    fun(6);
    fun(4);
    return 0;
}