#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0,rem[100],i=0,j;
    printf("Enter a number:");
    scanf("%d",&num);
    int n=num;
    while(n!=0)
    {
        rem[i]=n%10;
        n=n/10;
        count++;
        i++;
    }
    int sum=0;
    for(i=0;i<count;i++)
    {
        int product=pow(rem[i],count);
        sum=sum+product;
    }
    if(sum==num)
        printf("The number is armstrong number");
    else
        printf("The number is not armstrong number");
}
