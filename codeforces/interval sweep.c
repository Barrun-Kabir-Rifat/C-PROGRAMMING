#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=0&&b<=0)
        printf("NO");
    else if(a==b||a-1==b||a==b-1)
        printf("YES");
    else
        printf("NO");
}
