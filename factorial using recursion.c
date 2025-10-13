#include<stdio.h>
int fact(int n);
int main()
{
  int n=5;
  printf("factorial=%d",fact(n));
}
int fact(int n)
{
    if(n==1)
        return 1;

    return fact(n-1)*n;
}
