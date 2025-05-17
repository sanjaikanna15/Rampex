#include <stdio.h>

int main()
{
  int arr[100];
  int n;
  printf("HOW MANY NUMBERS : ");
  scanf("%d",&n);
  printf("\n ENTER %d NUMBERS : ",n);
  for(int a=0;a<n;a++)
  scanf("%d",&arr[a]);
  printf("\nREVERSE NUMBERS : ");
  for(int j=n-1;j>=0;j--)
  printf(" %d",arr[j]);
  return 0;
}
