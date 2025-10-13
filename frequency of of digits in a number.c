#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int rem[10],i=0,digit=0,fre[10];
    while(num!=0)
    {
        rem[i]=num%10;
        num=num/10;
        i++;
        digit++;
    }
    for(i=0;i<digit;i++)
    {
        int count=1;
        for(int j=i+1;j<digit;j++)
        {
         if(rem[i]==rem[j])
         {
             count++;
             fre[i]=0;
         }
        }

        fre[i]=count;
    }
    for(i=0;i<10;i++)
    {
        printf("%d occurs %d times.\n",rem[i],fre[i]);
    }
}
