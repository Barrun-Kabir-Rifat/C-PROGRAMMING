#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int i,j,rem[1000],count=0,fre[1000];
    while(num!=0)
    {
        rem[i]=num%10;
        fre[i]=-1;
        num=num/10;
        i++;
        count++;
    }
    int number;
    for(i=0;i<count;i++)
    { number=1;
     for(j=i+1;j<count;j++)
     {
         if(rem[i]==rem[j])
         {
             number++;
             fre[j]=0;
         }
     }
     if(fre[i]!=0)
     {
         fre[i]=number;
     }
    }
    for(i=count-1;i>=0;i--)
    {
        if(fre[i]!=0)
        printf("%d occurs %d times\n",rem[i],fre[i]);
    }

}
