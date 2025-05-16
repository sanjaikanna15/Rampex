#include <stdio.h>

int main()
{
    int tamil,english,maths,science,social,sum;
    float average;
    printf("Enter your tamil mark: ");
    scanf("%d",&tamil);
    printf("\nEnter your english mark: ");
    scanf("%d",&english);
    printf("\nEnter your maths mark: ");
    scanf("%d",&maths);
    printf("\nEnter your science mark: ");
    scanf("%d",&science);
    printf("\nEnter your socialscience mark: ");
    scanf("%d",&social);
    sum=tamil+english+maths+science+social;
    printf("\n\nTOTAL MARKS= %d",sum);
    average=sum/5;
    printf("\n\nAVERAGE= %f",average);
    return 0;
}