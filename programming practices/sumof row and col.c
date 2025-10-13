#include<stdio.h>
int main()
{
    int a[2][3],i,j,sumofrow,sumofcol;
     printf("Enter the elements of matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        sumofcol=0;
        sumofrow=0;

        for(j=0;j<3;j++)
        {
        sumofrow=sumofrow+a[i][j];
        sumofcol=sumofcol+a[j][i];

        }

 printf("sum of row =%d\n sum of col= %d\n",sumofrow,sumofcol);

    }

}

