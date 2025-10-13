#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int array1[n],array2[n];
    for(i=0;i<n;i++)
    {
        printf("array1[%d]=",i);
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];

    }
    for(i=0;i<n;i++)
    {
        printf("Array2[%d]=",i);
        printf(" %d ",array2[i]);
    }

}
