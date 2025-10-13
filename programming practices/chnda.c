#include<stdio.h>
int main()
{
    int id[8]={2,3,1,0,3,3,6,4};
    int even[4],odd[4],even2d[2][2],odd2d[2][2];
    int i,j,k=0,l=0;
    for(i=0; i<8; i++)
    {
        if(i%2==0)
        {
            even[k]=id[i];
            k++;
        }
        else
        {
            odd[l]=id[i];
            l++;
        }
    }
    printf("Name: Sadia Islam Chanda");
    printf("ID: 23103364");
    printf("Serial: 34");
    printf("Section: E");
    printf("Even array:");
    for(i=0; i<4; i++)
    {
        printf("%d ",even[i]);
    }
    printf("Odd array: ");
    for(i=0; i<4; i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n");
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            int temp = even[i];
            even[i] = even[j];
            even[j] = temp;
        }
        if(odd[i]>odd[j])
        {
            int temp = odd[i];
            odd[i] = odd[j];
            odd[j] = temp;
        }
    }

printf("Even array after sorting: ");
for(i=0; i<4; i++)
{
    printf("%d ",even[i]);
}
printf("\nOdd array after sorting: ");
for(i=0; i<4; i++)
{
    printf("%d ",odd[i]);
}
printf("\n");
k=0;
l=0;
for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
    {
        even2d[i][j]=even[k];
        k++;
    }
}
for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
    {
        odd2d[i][j]=odd[l];
        l++;
    }
}

printf("Even array after converting to a matrix:\n");
for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
    {
        printf("%d ",even2d[i][j]);
    }
    printf("\n");
}

printf("Odd array after converting to a matrix:\n");
for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
    {
        printf("%d ",odd2d[i][j]);
    }
    printf("\n");
}

char choice;
printf("Enter choice:\n");
printf("a.Add matrix\n");
printf("b.Subtract matrix\n");
printf("c.Multiply matrix\n");
scanf("%c",&choice);

switch(choice)
{
case 'a':
    printf("Result of addition:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",even2d[i][j]+odd2d[i][j]);
        }
        printf("\n");
    }
    break;

case 'b':
    printf("Result of subtraction:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",even2d[i][j]-odd2d[i][j]);
        }
        printf("\n");
    }
    break;

case 'c':
    printf("Result of multiplication:\n");

    int sum=0;
    int re[i][j];
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            for(int l=0; l<2; l++)
            {
                sum=sum+even2d[i][l]*odd2d[l][i];
            }
            re[i][j]=sum;
            printf("%d ",re[i][j],sum=0);
        }
        printf("\n");

    }
}
}
