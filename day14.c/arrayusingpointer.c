 #include <stdio.h>
 
 int main()
 {
     int matrix[5];
     printf("ENTER 5 NUMBERS :");
     for(int i=0;i<5;i++)
     {
       scanf("%d",&matrix[i]);
     }
     int *pointer= matrix;
     printf("\n THE VALUES ARE :");
     for(int j=0;j<5;j++)
     {
       printf(" %d ",*(pointer+j));
     }
     return 0;
 }