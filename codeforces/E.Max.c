#include<stdio.h>
int main()
{
    long long int i,n,num[2000];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);
    }
    int max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
         max=num[i];
    }

    printf("%d",max);

}
