#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s",&str1);
    scanf("%s",&str2);
    strlwr(str1);
    strlwr(str2);
    int a = strlen(str1);
    int b = strlen(str2);

    long long int i,sum1=0,sum2=0;
    for(i=0;i<a;i++)
    {
        sum1=sum1+str1[i];
    }

    for(i=0;i<b;i++)
    {
        sum2=sum2+str2[i];
    }
    if(sum1>sum2)
        printf("1");
    if(sum1<sum2)
        printf("-1");
    if(sum1==sum2)
        printf("0");

}
