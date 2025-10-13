#include<stdio.h>
int main()
{
  int num;
  printf("enter a number:") ;
  scanf("%d",&num);
  int i,sum=0;
  int temp=num;
  for(i=1;i<num;i++)
  {
      if(temp%i==0)
      {
          sum=sum+i;
      }
  }
  if(num==sum)
    printf("The number is perfect.");
  else
    printf("The number is not perfect.");


}
