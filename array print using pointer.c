#include<stdio.h>
int main()
{
    int arr[5];
    int i,*ptr;
    ptr=&arr[0];
    for(i=0;i<5;i++)
    {
     scanf("%d",ptr);
     ptr++;
    }
    ptr=&arr[0];
    for(i=0;i<5;i++)
    {
       printf("%d ",*ptr) ;
       ptr++;

    }
    int arr1[10],*ptr1;
    ptr=arr[0];
    ptr1=&arr1[0];
    for(i=0;i<5;i++)
    {
       *ptr1=*ptr;
       ptr++;
       ptr1++;
    }
    ptr1=arr1[0];
    for(i=0;i<5;i++)
    {
       printf("%d ",*ptr1) ;
       ptr1++;

    }
}
