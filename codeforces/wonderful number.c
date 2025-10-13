#include<stdio.h>
int main()
{
    long long int num;
    scanf("%lld",&num);
    if(num%2==0)
    {
        printf("NO");
        return 0;
    }
    long long int i=0,j,rem[100000],bin[100000],count=0;
    while(num!=0)
    {
        rem[i]=num%2;
        num=num/2;
        i++;
    }
    long long int a=i;
    for(j=0,i=a-1;i>=0;i--,j++)
    {
        bin[j]=rem[i];

    }
    for(i=0;i<a;i++)
    {
       if(bin[i]!=rem[i])
       {
           count++;
           break;
       }

    }
    if(count==0)
        printf("YES");
    else
        printf("NO");



}
