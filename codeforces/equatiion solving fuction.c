#include<stdio.h>
void power(unsigned long long int x,unsigned long long int n)
{
    unsigned long long int i,j,sum=0;

   for(i=2;i<=n;i=i+2)
   {
       unsigned long long int result=1;
       for(j=1;j<=i;j++)
       {
           result=result*x;
       }
        sum=sum+result;
   }
   printf("%llu",sum);
}

int main()
{
   unsigned long long int x,n;
   scanf("%llu %llu",&x,&n);
   power(x,n);

}
