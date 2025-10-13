#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    int first,last,digit,division;
    last=num%10;
    digit=log10(num);
    division=pow(10,digit);
    first=num/division;
    int mid=(num%division)/10;
    int swap=last*division+mid*10+first;

    printf("after swaping first and last digit = %d",swap);
}
