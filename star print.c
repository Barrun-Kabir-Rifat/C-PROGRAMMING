#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter the no of row:");
    scanf("%d",&row);
    printf("Enter the no of col:");
    scanf("%d",&col);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==3&&j==3)
                printf("O ");
            else
            printf("S ");
        }
        printf("\n");
    }
}
