#include<stdio.h>
#include <math.h>
int main()
{
    double x,a,b;
    double m,n,o;
    scanf("%lf%lf",&a,&b);
    x=a/b;
    m=floor(x);
    n=ceil(x);
    o=round(x);
    printf("floor %.0lf / %.0lf = %.0lf\n",a,b,m);
    printf("ceil %.0lf / %.0lf = %.0lf\n",a,b,n);
    printf("round %.0lf / %.0lf = %.0lf",a,b,o);

}
