#include<stdio.h>
int main()
{
    printf("Name:Barrun Kabir Rifat.\nID:23103392\nSection:E || Serial:39 ");
    int id[8]={2,3,1,0,3,3,9,2};
    int i,odd[4],even[4],j;
    printf("\n\nMy Id = ");
    for(i=0;i<8;i++)
    {
        printf("%d ",id[i]);
    }
    printf("\n\n");

    for(i=0,j=0;i<8;i+=2,j++)
    {
        even[j]=id[i];
    }
    for(i=1,j=0;i<8;i+=2,j++)
    {
        odd[j]=id[i];
    }
    printf("Elements of even index are:");
    for(i=0;i<4;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n\nElements of odd index are:");
    for(i=0;i<4;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n\nAfter sorting the even index array in ascending order:");
    for(i=0;i<4;i++)
    {
      for(j=i+1;j<4;j++)
     {
       if(even[i]>even[j])
       {
           int temp=even[i];
           even[i]=even[j];
           even[j]=temp;
       }
     }
     printf("%d ",even[i]);
    }
    printf("\n\nAfter sorting the odd index array in descending order:");
    for(i=0;i<4;i++)
    {
      for(j=i+1;j<4;j++)
     {
       if(odd[i]<odd[j])
       {
          int  temp=odd[i];
           odd[i]=odd[j];
           odd[j]=temp;
       }
     }
     printf("%d ",odd[i]);
    }
    printf("\n\n");
    int even2d[2][2],odd2d[2][2],k=0;
    printf("2D array after sorting even index elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         even2d[i][j]=even[k] ;
         k++;
         printf("%d ",even2d[i][j]);
        }
        printf("\n");
    }
   printf("\n2D array after sorting odd index elements:\n");
   k=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         odd2d[i][j]=odd[k] ;
         k++;
         printf("%d ",odd2d[i][j]);
        }
        printf("\n");
    }
    printf("\n\(a)ADD 2x2 Matrices\n(b)SUB 2x2 Matrices\n(c)MULTIPLY 2x2 Matrices\n");
    char ch;
    printf("\nEnter your choice:");
    scanf("%c",&ch);
    printf("\n");
    if(ch=='a')
    {
        printf("Sum of the matrices:\n");
        for(i=0;i<2;i++)
        {
         for(j=0;j<2;j++)
         {int sum=0;
           sum=even2d[i][j]+odd2d[i][j];
           printf("%d ",sum);
         }
         printf("\n");
        }
    }
   else if(ch=='b')
    {
        printf("\nSubtraction of two matrices:\n");
        for(i=0;i<2;i++)
        {
         for(j=0;j<2;j++)
         {int sub=0;
           sub=even2d[i][j]-odd2d[i][j];
           printf("%d ",sub);
         }
         printf("\n");
        }
    }
   else if(ch=='c')
    {
        printf("\nMultiplication of two matrices:\n");
        for(i=0;i<2;i++)
        {
         for(j=0;j<2;j++)
         { int mult=0;
             for(k=0;k<2;k++)
           {
             mult=mult+even2d[i][k]*odd2d[k][j];
           }
           printf("%d ",mult);
         }
         printf("\n");
        }
    }

    else
        printf("\nInvalid input.");
        getch();
}


