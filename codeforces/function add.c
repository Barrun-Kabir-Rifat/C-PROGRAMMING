#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=sum(a,b);

    printf("%d",x);

}

