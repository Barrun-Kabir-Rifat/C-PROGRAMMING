/*write c program to print the square of a number
if it is less than 10 */

#include<stdio.h>
int main()
{
    int num,x;
    printf("Enter a number:");
    scanf("%d",&num);
    x=num*num;
    if(x<10)
        printf("\nSquare of the number = %d",x);
    else
        printf("\nThe square of the number is not less than 10");
    getch();
}
