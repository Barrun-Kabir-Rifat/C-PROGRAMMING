#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
         scanf("%d",&a[i][j]);
     }
    }
    int sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
         if(i==j)
         {
             sum=sum+a[i][j];
         }
         if(i+j==n-1)
         {
             sum1=sum1+a[i][j];
         }
     }
    }
    int dif=sum-sum1;
    int x=abs(dif);
    printf("%d",x);
}
