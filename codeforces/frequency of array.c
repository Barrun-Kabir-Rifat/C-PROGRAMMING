#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }

        }
        printf("%d\n",count);
    }
}
