
#include<stdio.h>
int main()
{
    int a[5],i,n,even=0,odd=0;

    printf("How many elements you want to scan:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
        even++;
       else
        odd++;
    }

    printf("no of even=%d\nno of odd=%d",even,odd);



}

