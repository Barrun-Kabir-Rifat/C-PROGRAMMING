#include<stdio.h>
void recursion(int i,int n)
{

    if(i==n+1)
        return;
   printf("%d\n",i);
  return recursion(i+1,n);
}

int main()
{
    int n;
    scanf("%d",&n);
   int i=1;
    recursion(i,n);
}

