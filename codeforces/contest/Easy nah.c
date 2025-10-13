#include<stdio.h>
#include<math.h>
int main()
{
     int n;
    scanf("%d",&n);
    int  i,j,count=0;

    for(i=2;i<=n;i++)
    {
        for(j=2;j<=500;j++)
        {
            if((pow(i,j))<=n)
            {
                count++;
            }
        }
    }
    printf("%d",(n-count));
}
