#include<stdio.h>
#include<windows.h>
int main()
{
    char str[]="Thank you";
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        printf("%c",str[i]);
        sleep(1);
    }
}
