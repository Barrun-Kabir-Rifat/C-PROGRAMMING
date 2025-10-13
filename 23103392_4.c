#include<stdio.h>
int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reverse of the array:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}

