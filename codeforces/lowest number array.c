#include<stdio.h>
int main()
{
    long long int num[100000],i,n,count=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);
    }

    for(i=1;i<n;i++)
    {
        if(num[0]>num[i])
        {
           printf("%lld %lld",num[i],i+1);
           count++;
           break;
        }

    }
    if(count==0)
        printf("%lld 1",num[0]);

}
