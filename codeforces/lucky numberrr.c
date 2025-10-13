#include<stdio.h>
int main()
{
    unsigned long long int num,count=0,rem,temp;
    scanf("%llu",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;

        if((rem%4!=0) || (rem%7!=0))
        {
        count++;
        }
      temp=temp/10;
    }
    if(count==0)
        printf("YES");
    else
        printf("NO");
}
