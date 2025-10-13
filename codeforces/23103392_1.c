#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string:");
    scanf("%s",&str);
    int i,count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;

    }
    printf("String length = %d",count);
    getch();

}
