#include<stdio.h>
int main()
{
    int n;
    printf("Enter the term number:");
    scanf("%d",&n);
    int arr[n],i;
    arr[0]=0;
    arr[1]=1;
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
        arr[0]=0;
        arr[1]=1;
        }
        else{

        arr[i]=arr[i-1]+arr[i-2];

        }
        printf("%d ",arr[i]);
    }

}
