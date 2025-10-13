#include<stdio.h>
int main()
{
    int base,power,result=1,i;
    printf("Enter the base number:");
    scanf("%d",&base);
    printf("Enter the power of the number:");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
        result=result*base;
    }
    printf("\nThe power of the number = %d",result);
    getch();


}
