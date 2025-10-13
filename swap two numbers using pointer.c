#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int *p1,*p2,temp;
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d %d",a,b);
}
