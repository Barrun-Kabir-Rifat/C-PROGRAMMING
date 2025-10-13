#include<stdio.h>
int main()
{
  int a=5;
  int *ptr;
  ptr=&a;

   printf("%x\n",ptr);
   printf("%d",*ptr);
}
