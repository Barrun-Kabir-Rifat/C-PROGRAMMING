#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%3==0||i%5==0)
        {
            sum=sum+i;
        }
    }
    printf("Sum = %d",sum);
    getch();

}

