#include<stdio.h>
int main()
{
   int r,c,i,j,sum=0;
   printf("Enter the number of row: ");
   scanf("%d",&r);
   printf("Enter the number of collum: ");
   scanf("%d",&c);
   int a[r][c],b[r][c];
   printf("\nMatrix A:\n\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("a[%d][%d]= ",i,j);
           scanf("%d",&a[i][j]);
       }
   }

   printf("\nMatrix B:\n\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("b[%d][%d]= ",i,j);
           scanf("%d",&b[i][j]);
       }
   }
   printf("\n\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
   }
   printf("\n\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",b[i][j]);
       }
       printf("\n");
   }
   printf("\nMatrix A-B:\n\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
        sum=a[i][j]- b[i] [j];
        printf("%d ",sum);
       }
       printf("\n");
       sum=0;
   }
}
