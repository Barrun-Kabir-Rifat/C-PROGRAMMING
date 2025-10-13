#include<stdio.h>
int main()
{
    char str1[30]="My name is ";
    char str2[30]="Rifat";

    strcat(str1,str2);

    printf("The result strings = %s\n",str1);
    printf("String2 = %s",str2);

}
