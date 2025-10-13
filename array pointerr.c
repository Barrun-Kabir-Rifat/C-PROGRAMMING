#include<stdio.h>
int main()
{
  int i,num[5] ;
  printf("Enter array elements:");
  for(i=0;i<5;i++)
  {
      scanf("%d",&num[i]);
  }
  int *ptr;
  ptr=&num[0];
  for(i=0;i<5;i++)
  {
    printf("%d ",*ptr);
    *ptr++;
  }

}
