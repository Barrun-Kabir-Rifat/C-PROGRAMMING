#include<stdio.h>
int main()
{
    int n,first=0,second=1,fibo;
    printf("Enter the term: ");
    scanf("%d",&n);
    int i;
    printf("%d %d",first,second);
    for(i=1;i<=n-2;i++)
    {
        fibo=first+second;

        first=second;
        second=fibo;
        printf(" %d ",second);

    }

}
