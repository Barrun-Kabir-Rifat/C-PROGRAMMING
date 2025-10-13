#include<stdio.h>
void average()
{
    int n,i;
   scanf("%d",&n);
   double num[n],sum=0,count=0;
   for(i=0;i<n;i++)
   {
       scanf("%lf",&num[i]);
       sum=sum+num[i];
       count++;
   }
   double avg = sum/count;
   printf("%.7lf",avg);
}

int main()
{
average();
}
