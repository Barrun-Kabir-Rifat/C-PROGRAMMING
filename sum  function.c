#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y,result;
    printf("Enter the value of x,y: ");
    scanf("%d%d",&x,&y);
    result=sum(x,y);
    printf("Addition = %d ",result);
}

