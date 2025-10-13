
#include<stdio.h>
int main()
{
    int a[5],i,n,sum=0;
    float avg;
    printf("How many elements you want to scan:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    avg=sum/n;
    printf("sum=%d\naverage=%f",sum,avg);



}
