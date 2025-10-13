#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,n,j,k,sum,rem[10000];
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int count=0;
        for(j=0;n>0;j++)
        {
            rem[j]=n%2;
            n=n/2;
            if(rem[j]==1)
                count++;
        }
        sum=1;
      for(j=1;j<count;j++)
      {
          int result=1;
          for(k=1;k<=j;k++)
          {
              result=result*2;
          }
          sum=sum+result;
      }
      printf("%d\n",sum);

    }
}
