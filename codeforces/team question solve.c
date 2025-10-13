#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,p,v,t,count=0;
    for(i=1;i<=n;i++)
    {
      scanf("%d %d %d",&p,&v,&t);
      if((p==1&&(v==1||t==1))||(v==1&&(p==1||t==1))||(t==1&&(p==1||v==1)))
      {
          count++;
      }
    }
    printf("%d",count);
}
