#include<stdio.h>
int sum(int n);
int main()
{
  int n=5;
  printf("Sum=%d",sum(n));
}
int sum(int n)
{
    if(n==1)
        return 1;

    return sum(n-1)+n;
}
