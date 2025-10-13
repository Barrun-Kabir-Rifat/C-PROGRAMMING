#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string:");
    scanf("%s",&str);
    int i=0,length=0;
    while(str[i]!='\0')
    {
        i++;
        length++;
    }
    printf("length of the string = %d",length);

}
