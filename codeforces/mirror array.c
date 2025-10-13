#include<stdio.h>
int main()
{
     int n,m;
    scanf("%d %d",&n,&m);
   long long int a[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
         scanf("%lld",&a[i][j]);
     }
    }
     for(i=0;i<n;i++)
    {
     for(j=m-1;j>=0;j--)
     {
         printf("%lld ",a[i][j]);
     }
     printf("\n");
    }
}
