#include<stdio.h>
int main()
{
   long long int a,b,c,d,x,digit;
   scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
   x=(a*b*c*d);
   digit=x%100;
   printf("%02lld",digit);
}
