#include<stdio.h>
int main()
{
     int num[1000],i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    int min=num[0];
    int position=1;

    for(i=1;i<n;i++)
    {
        if(min>num[i])
        {
         min=num[i];
         position=i+1;
        }

    }
   printf("%d %d",min,position);
}

