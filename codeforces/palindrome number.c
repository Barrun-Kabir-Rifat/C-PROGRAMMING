#include<stdio.h>
int main()
{
    long long int num,temp,sum=0,rem;
    scanf("%lld",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    printf("%lld\n",sum);
    if(sum==num)
        printf("YES");
     else
         printf("NO");
}
