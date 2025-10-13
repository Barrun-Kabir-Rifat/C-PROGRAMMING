#include<stdio.h>
void fibonacci()
{
  int n;
  printf("Enter the term number:");
  scanf("%d",&n);
  int fibo[50];
  fibo[0]=0;
  fibo[1]=1;
  int i;
  for(i=0;i<n;i++)
  {
      fibo[i]=fibo[i-1]+fibo[i-2];
  }
  for(i=0;i<n;i++)
  {
      printf("%d ",fibo]);
  }
}
int main()
{
    fibonacci();
}

