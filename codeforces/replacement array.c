#include<stdio.h>
int main()
{
    long long int a[100000],n,i,count=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            printf("1 ");
        if(a[i]<0)
            printf("2 ");
        if(a[i]==0)
            printf("0 ");
    }

}

