#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter the elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }



}
