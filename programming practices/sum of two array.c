#include<stdio.h>
int main()
{
    int a[15],b[15],c[15],i,n;

    printf("How many elements you want to scan:");
    scanf("%d",&n);
    printf("enter the elements of first array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of second array:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];

        printf("c[%d]=%d ",i,c[i]);
    }



}


