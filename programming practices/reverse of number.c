
#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("\nReverse of the num = %d",sum);
    getch();
}
