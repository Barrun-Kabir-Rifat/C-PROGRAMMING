#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,rem;
  for(i=0;i<10000;i++)
  {
      int temp=i;
      int sum=0;
      while(temp!=0)
      {
          rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
      }
      if(i==sum)
        printf("%d ",i);
  }
  for(i=1000;i<=9999;i++)
  {
      int temp=i;
      int sum=0;
      while(temp!=0)
      {
          rem=temp%10;
        sum=sum+rem*rem*rem*rem;
        temp=temp/10;
      }
      if(i==sum)
        printf("%d ",i);
  }
}
