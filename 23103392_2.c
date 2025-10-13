#include<stdio.h>
int main()
{
    int a,b;
    int c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("1.Addition of two number.\n2.difference of two number.\n3.product of two number\n4.division of two number.\n");
    printf("Enter your choice:");
    scanf("%d",&c);
    switch(c){

        case 1:
        {
            printf("%d",a+b);
            break;
        }
        case 2:
        {
            printf("%d",a-b);
            break;
        }
        case 3:
        {
            printf("%d",a*b);
            break;
        }
        case 4:
        {
            if(b==0)
            {
                printf("\nUndefined");
                return 0;
            }
            printf("%d",a/b);
            break;
        }
    }
}
