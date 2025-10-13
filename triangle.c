#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
