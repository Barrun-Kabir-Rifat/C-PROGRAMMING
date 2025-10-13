#include<stdio.h>
void array(int arr[])
{
    int i,max,min,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];

    }

    printf("%d %d",min,max);
}
int main()
{
    int n,i,arr[1000];

    array(arr);
}
