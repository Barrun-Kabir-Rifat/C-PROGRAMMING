
//Check a num is greater,smaller or equal to another number

#include<stdio.h>
int main()
{
    int num,randomNumber=5;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>randomNumber)
        printf("\nThe number is greater than the mentioned number.");
    if(num<randomNumber)
        printf("\nThe number is smaller than the mentioned number.");
   if(num==randomNumber)
        printf("\nThe number is equal to the mentioned number.");
   getch() ;



}
