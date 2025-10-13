#include<stdio.h>
int main()
{
    long long int x;
    scanf("%lld",&x);

    long long int result=x/5;
    long long int rem=x%5;
    if(rem!=0)
        printf("%lld",result+1);
    else
    printf("%lld",result);

}
