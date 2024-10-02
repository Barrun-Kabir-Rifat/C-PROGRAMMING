#include<stdio.h>
int main()
{
    int mark1,mark2,mark3,total,totalMathPhysics;
    printf("Enter your marks of math: ");
    scanf("%d",&mark1);
    printf("Enter your marks of phy: ");
    scanf("%d",&mark2);
    printf("Enter your marks of Chem: ");
    scanf("%d",&mark3);

    total=mark1+mark2+mark3;
    totalMathPhysics=mark1+mark2;
    if(mark1>=65 && mark2>=55 && mark3>=50 )
    {
    if(total>=180 || totalMathPhysics>=140)

        printf("You are elighable for admission");
    }

    else
        printf("You are not elighable for admission");




}
