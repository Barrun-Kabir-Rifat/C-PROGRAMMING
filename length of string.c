#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string:");
    scanf("%s",str);
    int len=strlen(str);
    printf("%d",len);
}
