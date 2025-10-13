#include<stdio.h>
int main()
{
    int A[10][10],B[10][10];
    int r1,c1,i,j,r2,c2,sum=0;
    printf("Enter the rows and collum number of matrix A: ");
    scanf("%d%d",&r1,&c1);
    printf("Now give input for A matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }

    }
    printf("\n\nA=\n\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }
   printf("Enter the rows and collum number of matrix B: ");
    scanf("%d%d",&r2,&c2);
    printf("Now give input for B matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }

    }
    printf("\n\nB=\n\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",B[i][j]);

        }
        printf("\n");
    }

    printf("\n\n A+B=\n\n");
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=sum+(A[i][j]+B[i][j]);
            printf("%d ",sum);
            sum=0;

        }

        printf("\n");
        sum=0;
    }





}
