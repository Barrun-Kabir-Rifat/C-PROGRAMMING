#include<stdio.h>
int main()
{
    int num[30],n,i;
    printf("Enter the element number: ");
    scanf("%d",&n);
    printf("Enter numbers here: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("num[%d]= %d\n",i,num[i]);
    }


}
