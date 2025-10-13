#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*10+9;
       printf("%d + ",sum);
    }
    printf(".........");
    printf("\n\n");
    printf("The nth number of the series = %d",sum);

}
