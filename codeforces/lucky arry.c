
#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]==min)
        count++;
    }
    if(count%2==0)
        printf("Unlucky");
    else
        printf("Lucky");
}
