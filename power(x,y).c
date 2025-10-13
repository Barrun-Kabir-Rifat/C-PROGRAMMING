#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int a,b,c,d,x,y;
    scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
    x=pow(a,b);
    y=pow(c,d);

    if(x>y)
        printf("YES");
    else
       printf("NO");
}
