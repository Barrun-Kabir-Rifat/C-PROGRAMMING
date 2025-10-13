#include<stdio.h>
int main()
{
   long long int n,k;
    scanf("%lld %lld",&n,&k);
    int i;
    for(i=1;i<=k;i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        if(n%10!=0)
        {
          n=n-1;
        }
    }
    printf("%lld",n);
}
