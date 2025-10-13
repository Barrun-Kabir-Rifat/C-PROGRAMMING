
#include<stdio.h>
int main()
{
    int n,i,num=9,sum=0;

    printf("Enter the number of term:");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
    {
        sum=sum+num;
        num=num*10+9;
        printf("%d ",num);

    }
    printf("\n");
    printf("Sum of the series= %d",sum);
    getch();

}
