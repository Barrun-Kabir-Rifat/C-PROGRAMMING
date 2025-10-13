#include<stdio.h>
int main()
{
    int num;
    printf("Enter the day number of the week:");
    scanf("%d",&num) ;
    printf("\n");
    if(num==1)
        printf("Saturday");
    if(num==2)
        printf("Sunday");
    if(num==3)
        printf("Monday");
    if(num==4)
        printf("Tuesday");
    if(num==5)
        printf("Wednesday");
    if(num==6)
        printf("Thursday");
    if(num==7)
        printf("Friday");

        getch();


}
