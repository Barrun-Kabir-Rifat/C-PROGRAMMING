#include<stdio.h>
void recursion( unsigned long long int n)
{
    if(n==0)
        return;
  unsigned long long int a=n%10;
  recursion(n/10);
  printf("%llu ",a);

}

int main()
{
     unsigned long long int n,t,i;
    scanf("%llu",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%llu",&n);
    if(n==0)
    {
        printf("%llu\n",n);
        continue;
    }

    recursion(n);
    printf("\n");
    }
}
