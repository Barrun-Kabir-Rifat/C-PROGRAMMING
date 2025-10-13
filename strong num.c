#include<stdio.h>
int fact(int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
  int n,rem;
  printf("Enter a number:");
  scanf("%d",&n);
  int temp=n;
  int sum=0;
  while(temp!=0)
  {
      rem=temp%10;
      sum=sum+fact(rem);
      temp=temp/10;
  }
  if(n==sum)
    printf("The number is strong number");
  else
    printf("The number is not strong number");
}
