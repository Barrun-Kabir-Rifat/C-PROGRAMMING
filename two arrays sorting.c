#include<stdio.h>
int main()
{
   int n,i,j;
   printf("Enter the size of array:") ;
   scanf("%d",&n);
   int num1[n],num2[n],num3[n+n];
   printf("First array: \n\n");
   for(i=0;i<n;i++)
   {
       printf("Element %d : ",i);
       scanf("%d",&num1[i]);
   }
   printf("second array: \n\n");
   for(i=0;i<n;i++)
   {
       printf("Element %d : ",i);
       scanf("%d",&num2[i]);
   }
   for(i=0;i<n;i++)
   {
       num3[i]=num1[i];
   }
  for(i=0;i<n;i++)
  {
      num3[n+i]=num2[i];
  }
 printf("\n the third array:\n\n");
  for(i=0;i<n+n;i++)
  {
      printf("%d ",num3[i]);
  }

  for(i=0;i<n+n;i++)
  {
      for(j=i+1;j<n+n;j++)
      {
          if(num3[i]<num3[j])
          {
              int temp =num3[i];
              num3[i]=num3[j];
              num3[j]= temp;
          }
      }
  }
  printf("\nThe sorted array:\n\n");
  for(i=0;i<n+n;i++)
  {
      printf("%d ",num3[i]);
  }



}
