#include<stdio.h>
void arrayprint(int arr[],int start, int end)
{
    if(start>=end)
        return;
    printf("%d,",arr[start]);
    arrayprint(arr,start+1,end);
}
int main()
{
  int arr[5],start=0,end=5;
  for(int i=0;i<5;i++)
  {
      scanf("%d",&arr[i]);
  }
  arrayprint(arr,start,end);
}
