#include<stdio.h>
int main()
{
    int a=5,b=4,x;
    int *ptr1,*ptr2,*ptr3;
    ptr1=&a;
    ptr2=&b;
    x=*ptr1+*ptr2;
    ptr3=&x;
    printf("%d",*ptr3);
}
