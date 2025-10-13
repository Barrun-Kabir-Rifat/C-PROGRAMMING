#include<stdio.h>
int main()
{
  int n,num[10000],count=1,i;
  scanf("%d",&n);
  int min=num[0];
  for(i=1;i<n;i++)
  {
      if(num[0]>num[i])
      {
          min=num[i];
          count++;
      }
  }
  if(count%2==0)
    printf("Unlucky");
  else
    printf("Lucky");


}
