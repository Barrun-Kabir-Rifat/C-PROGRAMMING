#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem[100],i,count=1;
    printf("Enter a number:");
    scanf("%d",&num);
    int digit=log10(num);
    for(i=0;i<=digit;i++)
    {
        rem[i]=num%10;
        num=num/10;

    }
    int j;
    for(i=digit;i>=0;i--)
    {
        count=1;
        for(j=digit;j>=0;j--)
        {
           if(i!=j)
           {
               if(rem[i]==rem[j])
               {
                count++;
               }
           }
        }
         printf("%d occurs %d times\n",rem[i],count);
    }


}
