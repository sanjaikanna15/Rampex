#include <stdio.h>

void great(char name[],char dep[])
{
       printf("\nHello %s Welcome to %s deparment ",name,dep);
}
int main() 
{
    char name[100],dep[100];
    printf("\n Enter name: "); 
    scanf(" %s",&name);
    printf("\n Enter your department: ");
    scanf(" %s",&dep);
    great(name,dep);
    return 0;
}