#include<stdio.h>
int main()
{
    int num[30],n,i;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter numbers here:");
    for(i=0;i<n;i++)
    {
     scanf("%d",&num[i]);


     printf("num[%d]=%d\n",i,num[i]);
    }
}

