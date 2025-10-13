#include<stdio.h>
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  int i,count=0,num[100],flag=0;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&num[i]) ;
  }
  if(num[k]!=0)
  {
      for(i=k+1;i<=n;i++)
      {
  if(num[k]==num[i])
        {
        flag++;
        }
       count=k+flag;
      }
  if(num[k]!=num[k+1])
    count=k;

  }
  else if(num[k]==0)
  {
  for(i=1;i<=n;i++)
  {
      if(num[i]>0)
        count++;

  }
  }
  printf("%d",count);



}
