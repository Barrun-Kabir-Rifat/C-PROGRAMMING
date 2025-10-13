#include<stdio.h>
int main()
{
    int a,b,small,large,rem;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    large=a>b?a:b;
    small=a<b?a:b;
    while(small!=0)
    {
      rem = large%small;
      large=small;
      small=rem;
    }
    int gcd=large;
    printf("Gcd=%d",gcd);
}
