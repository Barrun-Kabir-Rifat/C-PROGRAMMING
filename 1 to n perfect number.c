<<<<<<< HEAD
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
=======
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
>>>>>>> bb8da398e4f4e8845321aedb5f01da57f4b7676f
