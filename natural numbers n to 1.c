
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter begining number:");
    scanf("%d",&num);
    printf("\n");
    for(i=num; i>=1; i--)
    {
        printf("%d ",i);

    }
    getch();
}
