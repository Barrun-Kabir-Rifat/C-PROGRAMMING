#include<stdio.h>
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(num%5==0 )
    {
        printf("\nThe Number is divisible by 5 ");
    }
    else if(num%11==0 )
    {
        printf("\nThe Number is divisible by 11 ");
    }

    else

        printf("The number is not divisible by 5 or 11");


        getch();

}
