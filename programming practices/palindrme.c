#include<stdio.h>
int main()
{
    int i,num,rem,sum,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==num)
        printf("The number is palindrome");
    else
        printf("The number is not palindrome:");


}
