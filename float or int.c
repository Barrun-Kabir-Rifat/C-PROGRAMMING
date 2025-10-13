#include <stdio.h>
#include <math.h>
int  main()
{
    float n,fraction,integer;
    scanf("%f",&n);
    fraction=n-(int)n;
    integer= n-fraction;
    if(fraction==0)
        printf("int %.0f",n);
    else
        printf("float %.0f %.3f",integer,fraction);
}
