#include<stdio.h>
int main()
{
    int n,i,x,sum=0;
    printf("Enter the term number : ");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
    {
        x=i*i*i;
        sum=sum+x;

    printf("%d + ",i*i*i);


    }
    printf(" = %d",sum);
    printf("\n\nThe result of nth term is %d ",n*n*n);
    getch();



}
