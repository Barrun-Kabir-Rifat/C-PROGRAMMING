#include<stdio.h>
int main()
{
    int num,rem2;
    printf("Enter a number:");
    scanf("%d",&num);
    int rem1=num%10;
    while(num!=0)
    {
        if(num/10==0)
        {
            rem2=num%10;
        }
        num=num/10;
    }
    printf("Sum of first and last digit = %d",rem1+rem2);
}
