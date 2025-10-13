#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char colour[50];
    scanf("%s",&colour);
    int i,count=0;
    int l=strlen(colour);
    for(i=0;i<l;i++)
    {
        if(colour[i]==colour[i+1])
            count++;
    }
    printf("%d",count);
}
