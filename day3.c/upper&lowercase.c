#include <stdio.h>

int main()
{
    char let;
    printf("ENTER A LETTER : ");
    scanf("%c",&let);
    if (let>='A' && let<='Z')
     printf("\n\n THE LETTER IS UPPERCASE ");
     else if(let>='a' && let<='z')
           printf("\n\n THE LETTER IS LOWERCASE");
           else
           printf("\n\n IT IS NOT A ALPHABET");
    return 0;
}