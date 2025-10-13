#include<stdio.h>
int main()
{
    int A[10][10],B[10][10];
    int i,j,r1,c1,r2,c2;
    printf("Enter the rows and column number of A matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of A matrix:\n\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {

            printf("A[%d][%d]=",i,j);
        scanf("%d",&A[i][j]);
        }

    }
    printf("Matrix A=\n\n ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        printf("%d ",A[i][j]);
        printf("\n");
    }




    printf("Enter the rows and column number of B matrix:");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements of B matrix:\n\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {

            printf("A[%d][%d]=",i,j);
        scanf("%d",&A[i][j]);
        }

    }
    printf("Matrix B=\n\n ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        printf("%d ",B[i][j]);
        printf("\n");
    }
}
