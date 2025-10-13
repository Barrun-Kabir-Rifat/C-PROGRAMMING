#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows:");
    scanf("%d",&n);

    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
       for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}
