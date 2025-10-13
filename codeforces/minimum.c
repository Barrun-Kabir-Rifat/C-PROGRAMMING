#include<stdio.h>
int main()
{
    long long int num[100000],i,n,count=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);
    }
   int min=num[0];

    for(i=0;i<n;i++)
    {
        if(num[i]<num[0])
        {

        min=num[i];

        }
        printf("%lld %lld",min,i+1);
        count++;
        break;

    }
    if(count==0)
        printf("%lld 1",num[0]);


}

