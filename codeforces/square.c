#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int w,h,i;

    for(i=1;i<=t;i++)
    {
       scanf("%d%d",&w,&h);
       if(w==h)
       {
        printf("Square\n");
       }
       else
        printf("Rectangle\n");
    }
}


