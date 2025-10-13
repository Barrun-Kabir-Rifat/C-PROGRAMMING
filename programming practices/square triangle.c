#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter row number:");
    scanf("%d",&row);

    printf("Square pattern:\n\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\ntriangle pattern:\n\n");

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }

    printf("\nreverse triangle pattern:\n\n");

    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }

}
