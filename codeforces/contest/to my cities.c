#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,num1,num2,num3;
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&num1,&num2,&num3);
        if((num1+num2>=10)||(num1+num3>=10)||(num2+num3>=10))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
