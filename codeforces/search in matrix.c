#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          if(arr[i][j]==x)
          {
              count=1;
          }
        }
    }
    if(count==1)
        printf("will not take number");
    else
        printf("will take number");
}
