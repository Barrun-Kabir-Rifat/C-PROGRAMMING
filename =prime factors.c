#include<stdio.h>
int main()
{
  int n,count=0;
  printf("Enter a number:");
  scanf("%d",&n);
  int i,j;
  for(i=2;i<=n;i++)
  {   count=0;
      for(j=2;j<i;j++)
      {
          if(i%j==0)
          {
              count=1;
              break;
          }
      }
      if(count==0)
      {
        if(n%i==0)
        {
            printf("%d ",i);
        }
      }

  }
}
