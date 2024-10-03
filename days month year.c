#include<stdio.h>
int main()
{
    int days,years,remaindays,months,day;
    scanf("%d",&days);
    years=days/365;
    remaindays=days-(years*365);
    months=remaindays/30;
    day=remaindays-(months*30);
    printf("%d years\n%d months\n%d days",years,months,day);


}
