#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b&&a<=c)
    {
        printf("%d\n",a);
        if(b<=c)
        {
            printf("%d\n",b);
            printf("%d",c);
        }
        else if(c<=b)
        {
            printf("%d\n",c);
            printf("%d",b);
        }
    }
    else if(b<=a&&b<=c)
    {
        printf("%d\n",b);
        if(a<=c)
        {
            printf("%d\n",a);
            printf("%d",c);
        }
        else if(c<=a)
        {
            printf("%d\n",c);
            printf("%d",a);
        }
    }
   else if(c<=b&&c<=a)
    {
        printf("%d\n",c);
        if(b<=a)
        {
            printf("%d\n",b);
            printf("%d",a);
        }
       else if(a<=b)
        {
            printf("%d\n",a);
            printf("%d",b);
        }
    }
    printf("\n\n");
    printf("%d\n%d\n%d",a,b,c);

}
