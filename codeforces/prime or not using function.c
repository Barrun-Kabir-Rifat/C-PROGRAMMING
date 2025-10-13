#include<stdio.h>
void prime(unsigned int num)
{
    unsigned int i,count=0;
    scanf("%lu",&num);
    if(num==1)
    {
        printf("NO\n");

    }
    if(num>1){

    for(i=2;i<=num/2;i++)
    {
    if(num%i==0)
      {
          count++;
          break;
      }

    }

    if(count==0)
        printf("YES\n");
    else
        printf("NO\n");
    }
}
int main()
{
   int i,t;
   unsigned int num;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       prime(num);
   }
}
