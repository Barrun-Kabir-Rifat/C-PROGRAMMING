#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    scanf("%s",&str);
    int l= strlen(str);
    int i,count=0;
    for(i=0;i<l;i++)
    {
        if((str[i]=='1'&&str[i+1]=='1'&&str[i+2]=='1'&&str[i+3]=='1'&&str[i+4]=='1'
           &&str[i+5]=='1'&&str[i+6]=='1')||(str[i]=='0'&&str[i+1]=='0'&&str[i+2]=='0'&&str[i+3]=='0'&&str[i+4]=='0'
           &&str[i+5]=='0'&&str[i+6]=='0'))
        {
            count=1;
        }

    }
    if(count==1)
        printf("YES");
    else
        printf("NO");

}
