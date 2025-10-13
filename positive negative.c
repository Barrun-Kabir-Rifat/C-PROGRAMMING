#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num>0)
       printf("\nNumber is positive");
    if(num<0)
       printf("\nNumber is negative");
    if(num==0)
       printf("\nNumber is zero");
        getch();

}
