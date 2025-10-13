#include<stdio.h>
int main()
{
    int row,col,i,j;
  printf("Enter row number: ") ;
  scanf("%d",&row);
  printf("Enter col number: ");
  scanf("%d",&col);
  printf("\n");
  printf("Rectangle shape:\n\n");
  for(i=1;i<=row;i++)
  {
      for(j=1;j<=col;j++)
      {
          printf("* ");
      }
      printf("\n");
  }
  printf("\n\n");
  printf("pyramid shape:\n\n");
  for(i=1;i<=row;i++)
  {
      for(j=1;j<=row-i;j++)
      {
          printf(" ");
      }
      for(j=1;j<=i;j++)
      {
          printf("* ");
      }
      printf("\n");
  }
  for(i=row-1;i>=1;i--)
  {
      for(j=1;j<=row-i;j++)
      {
          printf(" ");
      }
      for(j=1;j<=i;j++)
      {
          printf("* ");
      }
      printf("\n");
  }

}
