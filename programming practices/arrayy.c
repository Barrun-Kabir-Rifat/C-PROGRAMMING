#include<stdio.h>
int main()
{
    int marks[10],n,i,sum=0;
    float avg;
    printf("How many marks you want to add: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("marks[%d] = ",i);
        scanf("%d",&marks[i]);

    }
     for(i=0;i<n;i++)
    {

        sum=sum+marks[i];

    }
    avg=(float)sum/n;
    printf("Sum = %d\n",sum);
    printf("Average = %f",avg);

}
