#include <stdio.h>

int main()
{
    char c;
    printf("Enter a small letter: ");
    scanf("%c",&c);
    switch (c)
    {
        case 'a':
         printf("\n\n LETTER IS VOWEL");
         break;
        case 'e':
         printf("\n\n LETTER IS VOWEL");
         break;
        case 'i':
         printf("\n\n LETTER IS VOWEL");
         break;
        case 'o':
         printf("\n\n LETTER IS VOWEL");
         break;
        case 'u':
         printf("\n\n LETTER IS VOWEL");
         break;
        default:
         printf("\n\n LETTER IS CONSONANT" );
    }
return 0;
}