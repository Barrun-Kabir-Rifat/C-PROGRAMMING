#include<stdio.h>
int main()
{

  int i,sum=0,j;
  int temp;
  for(i=1;i<=10000;i++)
  {
      int temp=i;
      sum=0;
    for(j=1;j<i;j++)
    {
      if(temp%j==0)
      {
          sum=sum+j;
      }
    }
    if(sum==i)
    {
        printf("%d ",i);
    }
  }



}
