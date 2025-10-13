#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    scanf("%s",&str);
    int i;
    int l=strlen(str);
    char comma=',',space=' ';
    for(i=0;i<l;i++)
    {    comma=',';
        if(str[i]==comma)
        {
            char temp = comma;
            comma=space;
           printf("%c",comma) ;
           continue;
        }
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
            printf("%c",str[i]);
            continue;
        }

        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
            printf("%c",str[i]);
            continue;

        }
    }

}
