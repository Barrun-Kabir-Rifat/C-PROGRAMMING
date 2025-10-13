
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {

        num=num/10;
        count++;
    }
    printf("\n Number of digit = %d",count);
    getch();
}
