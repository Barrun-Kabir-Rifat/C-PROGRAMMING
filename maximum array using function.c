#include<stdio.h>
int max(int num[])
{
    int max=num[0];
 for(int i=0;i<5;i++)
 {
    if(max<num[i])
        max=num[i];
 }
 return max;
}
int main()
{

   int num[5],i,maximum;
   for(i=0;i<5;i++)
   {
       scanf("%d",&num[i]);
   }
   maximum=max(num);
   printf("maximum = %d",maximum);
}
