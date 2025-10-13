#include<stdio.h>
int main()
{
    unsigned long long int n,i,fibo[100];
    fibo[0]=0;
    fibo[1]=1;
    for(i=2;i<=50;i++)
    {
        fibo[i]=fibo[i-2]+fibo[i-1];
    }
    scanf("%llu",&n);
    printf("%llu",fibo[n-1]);

}
