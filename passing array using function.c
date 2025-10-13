#include<stdio.h>
void display(int num[])
{

   for (int i=0;i<5;i++)
   {
       printf("%d ",num[i]);
   }

}
int main()
{
   int i,n,num[5] ;
   printf("Enter elements:\n");

   for(i=0;i<5;i++)
   {
       printf("num[%d]=",i);
       scanf("%d",&num[i]);

   }
    display(num);
}
