#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    int i,anton=0,danik=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='A')
            anton++;
        if(str[i]=='D')
            danik++;
    }
    if(anton>danik)
        printf("Anton");
    if(danik>anton)
        printf("Danik");
    if(anton==danik)
        printf("Friendship");
}
