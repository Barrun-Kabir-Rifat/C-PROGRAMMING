#include<stdio.h>
void calculator(int a,int b)
{
    int n;
    printf("1.Addition of two number\n2.Subtractin of two number\n3.multiplication of two number\n4.Division of two number");
    printf("\n\n");
    printf("Enter your choice:");
    scanf("%d",&n);
    printf("\n");
    switch(n)
    {
    case 1:
        {
        printf("\nAddition = %d ",a+b);
        break;

        }
    case 2:
        {
        printf("\nSubtraction = %d ",a-b);
        break;
        }
    case 3:
        {
        printf("\nMultiplication = %d ",a*b);
        break;
        }

    case 4:
        {

        printf("\nDivision = %d ",a/b);
        break;
        }
    }
}
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);


  calculator(a,b);
getch();
}
