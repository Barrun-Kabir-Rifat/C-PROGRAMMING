#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0;
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
        printf("\nThe number is palindrome.");
    else
        printf("\nThe number is not palindrome.");
    getch();
}
