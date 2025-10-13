#include<stdio.h>
int main()
{
    int matrix1[3][3],matrix2[3][3],matrix3[3][3];
    printf("matrix1: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Matrix1[%d][%d] = ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nmatrix2: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Matrix2[%d][%d] = ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\nMatrix1 = \n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix2 = \n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\nAddition of the two matrix:\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }


}
