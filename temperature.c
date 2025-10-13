#include<stdio.h>
int main()
{
    float temp;
    printf("Enter temperature in centigrade:");
    scanf("%f",&temp);
    printf("\n");
    if(temp<0)
        printf("It's freezing weather.");
    if(temp>=0 && temp<10)
        printf("It's very cold weather.");
    if(temp>=10 && temp<20)
        printf("It's cold weather.");
    if(temp>=20 && temp<30)
        printf("Normal temperature.");
    if(temp>=30 && temp<40)
        printf("It's hot weather");
    if(temp>=40)
        printf("It is very hot");
        getch();


}
