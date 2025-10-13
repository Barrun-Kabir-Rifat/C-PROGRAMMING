#include<stdio.h>
int main()
{
    float a,b,c,d,x,y;
    printf("Enter the value of a,b,c,d: ");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    x=c-d;
    y=(a+b)/x ;
    if(x!=0)
        printf("Result is = %f",y);
    if(x==0)
        printf("result error");
    return 0;
}
