#include<stdio.h>
int main()
{
    int n,i,negative=0,positive=0,count=0,max,min;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);

    }
    max=num[0];
    min=num[0];
    for(i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
         if(num[i]<min)
        {
            min=num[i];
        }
        if(num[i]<0)
        negative++;
        if(num[i]>0)
        positive++;
        if(num[i]==0)
            count++;


    }
    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);

    printf("Positive = %d\n",positive);
    printf("negative = %d\n",negative);
    printf("No of zero = %d\n",count);




}
