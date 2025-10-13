#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        printf("%c",ch+32);
    if(ch>=90&&ch<=122)
        printf("%c",ch-32);

}
