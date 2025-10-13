#include<stdio.h>
int main()
{
    unsigned long long int t,n,fact,i,j;
    scanf("%llu",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%llu",&n);
        fact=1;
    for(j=1;j<=n;j++)
    {
       fact=fact*j;
    }
      printf("%llu\n",fact);

    }
    return 0;
}
