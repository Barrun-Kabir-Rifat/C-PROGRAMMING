#include<stdio.h>
 void calculator()
{
    int a,b;
   printf("Enter two numbers:") ;
   scanf("%d %d",&a,&b);
   printf("1.sum of the numbers\n2.difference of two number\n3.product of the numbers\n4.division of the numbers\n");
   int n;
   printf("Enter your choice:");
   scanf("%d",&n);
   if(n==1)
    printf("Sum= %d",a+b);
   if(n==2)
    printf("Dif= %d",a-b);
    if(n==3)
    printf("product= %d",a*b);
    if(n==4)
    printf("division = %d",a/b);
}


int main()
{
   calculator();
}
