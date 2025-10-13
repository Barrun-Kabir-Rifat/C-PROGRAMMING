#include<stdio.h>
int main ()
{
    int n,i;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("\nEnter the element of a : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element of b: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nafter adding two array: ");
    for(i=0;i<n;i++)
    {
       c[i]=a[i]+b[i];
       printf("%d ",c[i]);

    }

}
