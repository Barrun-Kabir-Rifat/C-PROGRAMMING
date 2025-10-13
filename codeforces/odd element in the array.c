#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int arr[n];
    int i,count=0,sum=0;
    printf("Enter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++)
    {
      if(arr[i]%2!=0)
        {
            count++;
            sum=sum+arr[i];
        }
    }
    printf("\nNo of odd number in the array = %d\n\n",count);
    printf("Sum of the odd number = %d",sum);
    getch();
}
