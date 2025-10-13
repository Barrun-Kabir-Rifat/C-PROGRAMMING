#include<stdio.h>
int main()
{
    int i,n,count=0,j;
    printf("Enter the array size:");
    scanf("%d",&n);
    int array1[n],array2[n];
    for(i=0;i<n;i++)
    {
        printf("array1[%d]=",i);
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
       for(j=i+1;j<n;j++)
       {
           if(array1[i]==array1[j])
           {
            count++;

           }
       }

    }
    printf

}
