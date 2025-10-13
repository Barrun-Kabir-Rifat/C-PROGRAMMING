#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    printf("Enter the number of term:");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("1/%d + ",i);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+1.0/i;

    }
    printf("...= %f",sum);
    getch();

}
