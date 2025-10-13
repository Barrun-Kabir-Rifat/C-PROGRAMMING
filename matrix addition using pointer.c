#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],c[3][3] ;
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
   int *ptr1,*ptr2,*ptr3;
   ptr1=&a[0][0];
   ptr2=&b[0][0];
   ptr3=&c[0][0];
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
          *ptr3=*ptr1+*ptr2;
          ptr1++;
          ptr2++;
          ptr3++;
       }

   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
          printf("%d ",c[i][j]);

       }
       printf("\n");
   }

}
