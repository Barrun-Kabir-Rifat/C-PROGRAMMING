#include<stdio.h>
int main()
{
   int n1,n2,sum,i;
   while(1)
   {
   scanf("%d %d",&n1,&n2);
   if((n1<=0) || (n2<=0))
    {
        return 0;
    }

    sum=0;

   if(n1>=n2)
    {
       for(i=n2;i<=n1;i++)
       {

           sum=sum+i;
           printf("%d ",i);
       }
       printf("sum =%d",sum);
       printf("\n");

    }

    if(n1<n2)
    {
       for(i=n1;i<=n2;i++)
       {

           sum=sum+i;
           printf("%d ",i);
       }
      printf("sum =%d",sum);
      printf("\n");
    }


   }
}
