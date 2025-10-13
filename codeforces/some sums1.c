#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int i,rem,sum,temp,sum1=0,j;
    for(i=1;i<=n;i++)
    {
        sum=0;
        temp=i;
        while(temp!=0)
        {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
        }

      if(sum>=a && sum<=b)
      {
       sum1=sum1+i;
      }

    }
    printf("%d",sum1);

}
