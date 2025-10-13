#include<stdio.h>
int main()
{
   long long int n,i,num[100000],count=1;
   scanf("%lld",&n);
   for(i=0;i<n;i++)
   {
       scanf("%lld",&num[i]);
   }

   for(i=0;i<n/2;i++)
   {
      if (num[i]!=num[n-1-i])
      {
          count=0;
          break;
      }
   }
   if(count==1)
    printf("YES");
   else
    printf("NO");
}

