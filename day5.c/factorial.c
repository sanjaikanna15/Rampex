
#include<stdio.h>

int main()
{
  int num,fac=1;
  printf("ENTER A NUMBER = ");
  scanf("%d",&num);
  if (num <= 0)
  {
   printf("\n **--ENTER CORRECT INPUT--**");
   }
  while(num>1)
  {
   fac = fac*num;
   num--;
  }
  printf("\n FACTORIAl IS = %d",fac);
  return 0;
}