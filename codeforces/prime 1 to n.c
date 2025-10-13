#include<stdio.h>
int main()
{
    int n,i,num,count;
    scanf("%d",&n);
    for(num=2;num<=n;num++)
    {
        count=0;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
                count++;
        }
        if(count==0)
            printf("%d ",i);
    }
}
