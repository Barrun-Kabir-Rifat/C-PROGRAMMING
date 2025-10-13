#include<stdio.h>
int main()
{
    int num1,num2,small,large,rem;
    printf("Enter num1 and num2:");
    scanf("%d%d",&num1,&num2);
    large=num1>num2?num1:num2;
    small=num1<num2?num1:num2;

     while(small!=0)
    {
       rem=large%small;
       large=small;
       small=rem;

    }
    int gcd=large;
    int lcm=(num1*num2)/gcd;
    lcm= (num1*num2)/gcd;

    printf("Gcd = %d\nlcm=%d",gcd,lcm);

}
