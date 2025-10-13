
#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],c[3][3] ,arr[3][3];
   int i,j;
   printf("Enter the elements of matrix a:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("a[%d][%d]=",i,j);
          scanf("%d",&a[i][j]);
       }
   }

  printf("Enter the elements of matrix b:\n");

  for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
          printf("b[%d][%d]=",i,j);
          scanf("%d",&b[i][j]);
       }
   }
   for(i=0;i<3;i++)
   {

      for(j=0;j<3;j++)
      {
          int mult=0;
          for(int k=0;k<3;k++)
          {
              mult=mult+a[i][k]*b[k][j];
          }
           arr[i][j]=mult;
      }

   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
          printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
}
