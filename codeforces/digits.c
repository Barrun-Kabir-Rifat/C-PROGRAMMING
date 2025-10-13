#include<stdio.h>
int main()
{
    long long int i,n,num,digit=0,rem,temp;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&num);
        temp=num;
        if(temp==0)
        {
         rem=temp%10;

            temp=temp/10;
           printf("%lld ",rem);
        }

        while(temp!=0)
        {
            rem=temp%10;

            temp=temp/10;
           printf("%lld ",rem);
        }


        digit=0;
        printf("\n");
    }
}
