#include<stdio.h>
int main()
{
    int i,j,count=0,sum=0;
    for(i=1;i<=10;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(i>=2){
        if(count==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        }
    }
    printf("\n\n%d",sum);

}
