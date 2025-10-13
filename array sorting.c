#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(num[i]>num[j])
          {
              int temp=num[i];
              num[i]=num[j];
              num[j]=temp;
          }

        }

    }
    printf("\nAfter sorting the array in ascending order:\n\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",num[i]) ;
    }



}
