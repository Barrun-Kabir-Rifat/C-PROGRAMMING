#include<stdio.h>
int main()
{
  int arr[5],fre[10],count=1;
  int i,j,n;
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
    fre[i]=-1;
  }
  for(i=0;i<5;i++)
  {
      count=1;
    for(j=i+1;j<5;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
            fre[j]=0;
        }
    }
    if(fre[i]!=0)
        {
    fre[i]=count;
    }
  }
  for(i=0;i<5;i++)
  {
      if(fre[i]>0)
      printf("%d appears %d times\n",arr[i],fre[i]);
  }

}
