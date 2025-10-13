#include<stdio.h>
int main()
{
    int n,sum=0,i,sum1=0;
    printf("Enter no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*10+9;
       printf("%d ",sum);
    }
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum*10+9;
        sum1+=sum;
    }
    printf("\nSum of the series up to 5 terms:%d",sum1);
}
