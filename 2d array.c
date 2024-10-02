#include<stdio.h>
int main()
{
    int a[3][4] ,i,j;
    printf("Enter the 12 values:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {

            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d]=%d\n" ,i,j,a[i][j]);

        }
    }
}
