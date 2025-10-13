#include<stdio.h>
int main()
{
    int t,x,y,i,j,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
        sum=0;
        if(x>=y)
        {
            for(j=y+1;j<x;j++)
            {
                if(j%2!=0)
                sum=sum+j;
            }
            printf("%d\n",sum);
        }
        if(x<y)
        {
            for(j=x+1;j<y;j++)
            {
                if(j%2!=0)
                sum=sum+j;
            }
            printf("%d\n",sum);
        }

    }
}
