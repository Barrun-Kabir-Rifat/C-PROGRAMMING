#include<stdio.h>
int main()
{
    int marks[30],n,i,sum=0;
    printf("How many numbers you want to print:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("marks[%d]=",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    printf("Adition of these number=%d",sum);


}
