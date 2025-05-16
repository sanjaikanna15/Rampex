#include <stdio.h>

int main()
{
    int tamil,english,maths,science,social;
    printf("Enter your tamil mark: ");
    scanf("%d",&tamil);
    if(tamil>=35)
     printf("PASS");
     else
      printf("FAIL");
    printf("\nEnter your english mark: ");
    scanf("%d",&english);
    if(english>=35)
     printf("PASS");
     else
      printf("FAIL");
    printf("\nEnter your maths mark: ");
    scanf("%d",&maths);
    if(maths>=35)
     printf("PASS");
     else
      printf("FAIL");
    printf("\nEnter your science mark: ");
    scanf("%d",&science);
    if(science>=35)
     printf("PASS");
     else
      printf("FAIL");
    printf("\nEnter your socialscience mark: ");
    scanf("%d",&social);
    if(social>=35)
     printf("PASS");
     else
      printf("FAIL");
 return 0;
}