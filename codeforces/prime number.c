#include<stdio.h>
int main()
{
    long long int i,x,count=0;
    scanf("%lld",&x);

    for(i=2;i<x;i++)
    {
    if(x%i==0)
    count++;

    }
    if(count==0)
        printf("YES");
    else
        printf("NO");
}
