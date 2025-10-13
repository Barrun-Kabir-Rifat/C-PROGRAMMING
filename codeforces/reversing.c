#include<stdio.h>
int main()
{
   long long int n,i,num[10000];
   scanf("%lld",&n);
   for(i=0;i<n;i++)
   {
       scanf("%lld",&num[i]);
   }

   for(i=n-1;i>=0;i--)
   {
       printf("%lld ",num[i]);
   }
}
