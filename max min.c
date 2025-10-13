#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a<=b&&a<=c)
    {
    printf("%d ",a);
    if(c<b)
    printf("%d",b);
    else
        printf("%d",c);
    }

    if(b<a&&b<=c)
    {
    printf("%d ",b);
    if(c<a)
    printf("%d",a);
    else
        printf("%d",c);
    }

    if(c<b&&c<a)
    {
    printf("%d ",c);
    if(a<b)
    printf("%d",b);
    else
        printf("%d",a);
    }

}
