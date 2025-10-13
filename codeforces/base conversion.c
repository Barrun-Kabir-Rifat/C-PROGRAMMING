#include<stdio.h>
void binary( unsigned long long int n)
{
    if(n==0)
        return;
  unsigned long long int a=n%2;
  binary(n/2);
  printf("%llu",a);

}

int main()
{
     unsigned long long int n,t,i;
    scanf("%llu",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%llu",&n);
    if(n==1)
    {
        printf("%llu\n",n);
        continue;
    }

    binary(n);
    printf("\n");
    }
}

