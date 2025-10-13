//print characters from a string.
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string:");
    scanf("%s",&str);
    int i=0;
    while(str[i]!='\0')
    {
        printf("str[%d]=%c\n",i,str[i]);
        i++;
    }
}
