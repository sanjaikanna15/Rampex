#include <stdio.h>

int main()
{
  int day;
  printf("Enter a day[1 to 7]: ");
  scanf("\n%d",&day);
  switch(day)
  {
   case 1:
    printf("\n\n    MONDAY");
    break;
   case 2:
    printf("\n\n    TUESDAY");
    break;
   case 3:
    printf("\n\n    WEDNESDAY");
    break;
   case 4:
    printf("\n\n    THURSDAY");
    break;
   case 5:
    printf("\n\n    FRIDAY");
    break;
   case 6:
    printf("\n\n    SATURDAY");
    break;
   case 7:
    printf("\n\n    SUNDAY");
    break;
   default:
    printf("\n     ERROR---- \nEnter correct number[1 to 7]");
    break;
  }
    return 0;
}