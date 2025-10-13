#include<stdio.h>
void num(int n)
{

    int i;
    for(i=1;i<n;++i)
    {
        printf("%d ",i);
    }
    printf("%d",n);

}

int main()
{
    int n;
    scanf("%d",&n);
    num(n) ;

}
