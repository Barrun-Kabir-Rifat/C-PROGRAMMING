#include<stdio.h>
int main()
{
    int maths, phy, chem, total, total_math_phy;

    printf("Enter marks of maths:");
    scanf("%d",&maths);
    printf("Enter marks of phy:");
    scanf("%d",&phy);
    printf("Enter marks of chem:");
    scanf("%d",&chem);

    total= maths+ phy + chem;
    total_math_phy= maths+ phy;

    if(maths>=65 && phy>=55 && chem>=50)
    {
    if(total>=180 || total_math_phy>=140)
    {
        printf("Eligible:\n");
    }
    else
    {
        printf("Not eligible:\n");
    }
    }
    else
    {
        printf("Not eligible:\n");
    }
    return 0;
}
