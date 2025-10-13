#include<stdio.h>
int main()
{
    long long int a[100000],n,i,x,count=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("%lld ",i);
            count++;
            break;
        }

    }
    if(count==0)
        printf("-1");

}
