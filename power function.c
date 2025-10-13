#include<stdio.h>
int power(int x,int y)
{
  int i,result=1;
  for(i=1;i<=y;i++)
  {
      result=result*x;
  }
  return result;
}
int main()
{
    int base,exp,res;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter exponent:");
    scanf("%d",&exp);
    res=power(base,exp);
    printf("power result= %d ",res);
}
