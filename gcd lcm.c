#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem;
    printf("Enter two number:");
    scanf("%d%d ",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    int gcd = n1;
    printf("GCD=%d",gcd);


}
