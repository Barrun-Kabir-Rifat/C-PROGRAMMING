#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    while(arr[i]%2==0)
    {
        count++;
        i++;
    }

    printf("%d",count/n);

}
