#include<stdio.h>
int main()
{
    char str[100],ch[100];
    scanf("%s",&str);
    char temp[100];
    strcpy(temp,str);
    strrev(temp);
    int d=strcmp(str,temp);

    if(d==0)
    printf("The string is palindrome");
    else
        printf("The string is not palindrome.");


}
