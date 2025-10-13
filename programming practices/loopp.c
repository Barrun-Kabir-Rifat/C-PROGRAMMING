#include<stdio.h>
int main()
{
    int i,n,fibo,first=0,second=1;
    printf("Enter the term number:");
    scanf("%d",&n);
    printf("0 1 ");
    for(i=1;i<=n-2;i++)
    {
        fibo=first+second;

        first=second;
        second=fibo;
        printf("%d ",fibo);
    }


}
