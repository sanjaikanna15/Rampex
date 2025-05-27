 #include <stdio.h>
 
 int main()
 {
     int matrix[3][3][3];
     printf("ENTER 3*3 MATRIX :");
     for(int i=0;i<3;i++)
     {
         printf("\n");
         for(int j=0;j<3;j++)
         {
             for(int k=0;k<3;k++)
             {
             scanf("%d",&matrix[i][j][k]);
             }
         }
     }
     int (*pointer)[3][3]= matrix;
     printf("\n THE VALUES ARE :");
     for(int i=0;i<3;i++)
     {
         printf("\n");
         for(int j=0;j<3;j++)
         {
             for(int k=0;k<3;k++)
             {
              printf(" %d",*(*(*(pointer+i)+j)+k));
             }
         }
     }
     return 0;
 }