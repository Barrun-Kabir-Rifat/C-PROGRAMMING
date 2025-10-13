#include<stdio.h>
void array()
{
   int n;
  scanf("%d",&n);
  int num1[n],num2[n],num3[n+n];
  int i,j;
  for(i=0;i<n;i++)
  {
      scanf("%d",&num1[i]);
  }
  for(i=0;i<n;i++)
  {
      scanf("%d",&num2[i]);
  }
   for(i=0;i<n;i++)
  {
      num3[i]=num2[i];
  }
  for(j=0;j<n;j++)
  {
      num3[i+j]=num1[j];
  }
  for(i=0;i<n+n;i++)
  {
    printf("%d ",num3[i]);
  }
}
int main()
{

  array();

}
