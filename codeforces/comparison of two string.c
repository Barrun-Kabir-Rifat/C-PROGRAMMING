#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30],temp,str3[30];
    scanf("%s %s",str1,str2);
    int a,b;
    a=strlen(str1);
    b=strlen(str2);

      strcpy(str3,str1);
    strcat(str1,str2);

    temp=str3[0];
    str3[0]=str2[0];
    str2[0]=temp;

    printf("%d %d\n",a,b);
    printf("%s\n",str1);
    printf("%s %s",str3,str2);
}
