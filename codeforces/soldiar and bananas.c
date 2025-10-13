#include<stdio.h>
int main()
{
    long long int k,n,w;
    scanf("%lld %lld %lld",&k,&n,&w);
   long long int i,result=1,sum=0;
   for(i=1;i<=w;i++)
   {
       result=1;
       result=k*i;
      sum=sum+result;

   }

  long long int res=sum-n;
   if(res>0)
    printf("%lld",res);
   else
    printf("0");
}
