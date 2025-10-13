#include<stdio.h>
void array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr1[n],arr2[n],*ptr1,*ptr2;
    ptr1=&arr1[0];
    ptr2=&arr2[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    array(arr1,n);
    for(int i=0;i<n;i++)
    {
        *ptr2=*ptr1;
        ptr1++;
        ptr2++;
    }
    array(arr2,n);
}
