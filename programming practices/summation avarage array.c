#include<stdio.h>
int main()
{
    int i,sum=0,n;
    float avg;
    printf("Enter array size: ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    avg=sum/n;

    printf("Summation= %d\n",sum);
    printf("Average = %f ",avg);
}
