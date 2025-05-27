 #include <stdio.h>
 
 int main()
 {
     int matrix[3][3];
     printf("ENTER 3*3 MATRIX :");
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             scanf("%d",&matrix[i][j]);
         }
     }
     int (*pointer)[3]= matrix;
     printf("\n THE VALUES ARE :");
     for(int i=0;i<3;i++)
     {
         printf("\n");
         for(int j=0;j<3;j++)
         {
           printf(" %d",*(*(pointer+i)+j));
         }
     }
     return 0;
 }