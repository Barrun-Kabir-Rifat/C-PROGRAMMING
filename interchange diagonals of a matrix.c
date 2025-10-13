#include<stdio.h>
int main()
{
  int  a[3][3] = {{1,4,1},{2,6,1},{6,3,1}};
  int  b[3][3] = {{1,5,1},{1,1,3},{1,1,9}};
    int i,j,sum=0;
    printf("Matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("%d ",a[i][j]) ;
        }
        printf("\n");

    }
    printf("\nMatrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("%d ",b[i][j]) ;
        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
          if(i<j)
          {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
          }

        }
        printf("\n");

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("%d ",a[i][j]) ;
        }
        printf("\n");
    }



}
