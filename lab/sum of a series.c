#include<stdio.h>
int main()
{
    int i,n,sum=0,series_sum=0;
    printf("Enter the terms of the series:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum*10+2;

       printf("%d + ",sum);
       series_sum =series_sum + sum;
    }
    printf("...= %d",series_sum);
    getch();

}
