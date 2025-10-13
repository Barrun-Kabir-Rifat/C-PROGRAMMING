#include<stdio.h>
void array(int arr[])
{
    int i;
    for(i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    array(arr);
}
