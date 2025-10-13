#include<stdio.h>
int prime(int num)
{
  int i,count=0;
  if(num<=1)
    return 0;
  for(i=2;i<num;i++)
  {
      if(num%i==0)
      {
          count++;
          break;
      }
      if(count==0)
        return 1;
        else
            return 0;

  }
}
int main()
{
    int n,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    d=prime(n);
    if(d==1)
        printf("The number is prime.");
    else
        printf("The number is not prime");
}
