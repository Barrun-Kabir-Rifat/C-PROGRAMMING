#include<stdio.h>
int main()
{
    int power,base;
    printf("Enter base value:");
    scanf("%d",&base);
    printf("Enter power value:");
    scanf("%d",&power);
    int i,result=1;
    for(i=1;i<=power;i++)
    {
        result=result*base;
    }
    printf("%d",result);

}
