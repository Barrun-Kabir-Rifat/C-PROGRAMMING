#include<stdio.h>
int main()
{
    int l,r,t;
    scanf("%d",&t);

    int i,j;
    for(i=1;i<=t;i++)
    {
     scanf("%d%d",&l,&r);
     int sum=0;
     for(j=l;j<=r;j++)
     {
         sum=sum+j;
     }
     printf("%d\n",sum);
    }
}
