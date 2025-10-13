#include<stdio.h>
void display(int num)
{
    num>=0?printf("Number is positive."):printf("Number is negative");
}
int main()
{
    int num;
   printf("Enter a number:");
   scanf("%d",&num);
   display(num);
}
