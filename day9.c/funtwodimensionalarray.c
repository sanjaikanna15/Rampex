#include <stdio.h>

int array()
{
    int arr[2][3];
    printf("\n ENTER 2*3 MATRIX : ");
    for(int i=0;i<2;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n THE MATRIX ARE :");
    for(int k=0;k<2;k++)
    {
        printf("\n");
        for(int l=0;l<3;l++)
        {
            printf(" %d ",arr[k][l]);
        }
    }
    return 0;
}
int main()
{
    array();
    return 0;
}