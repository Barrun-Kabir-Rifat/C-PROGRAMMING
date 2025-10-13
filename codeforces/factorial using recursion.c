#include<stdio.h>
unsigned long long int fact(unsigned long long int n)
{
    if(n==0)
        return 1;

  return n*fact(n-1);
}

int main()
{
    unsigned long long int n;
    scanf("%llu",&n);
  printf("%llu",fact(n));
}
