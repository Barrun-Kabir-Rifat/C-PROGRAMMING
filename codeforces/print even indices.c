#include<stdio.h>
void even(int arr[],int n)
{
    int i=n-1;
   if((i)==0)
   {
      printf("%d",arr[0]);
      return;
   }
   if(i%2==0)
    printf("%d ",arr[i]);

    return even(arr,(n-1));

}

int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    even(arr,n);

}
