#include<stdio.h>
int main()
{
    long long int k,s;
    scanf("%lld %lld",&k,&s);
    long long int x,y,z,count=0;
    for(x=0;x<=k;x++)
    {
        for(y=0;y<=k;y++)
        {
            for(z=0;z<=k;z++)
            {

             if((x+y+z)==s)
             {
                 count++;
             }
            }
        }
    }
    printf("%d ",count);
}
