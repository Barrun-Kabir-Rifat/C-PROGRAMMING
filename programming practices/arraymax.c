#include<stdio.h>
int main()
{
    int i,n,min;
    printf("Enter array size:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Num[%d] = ",i);
        scanf("%d",&num[i]);

    }
     min=num[0];
     for(i=0;i<n;i++)
    {
        if(min>num[i])
        {
            min=num[i];
        }

    }
    printf("Minimum = %d",min);

}
