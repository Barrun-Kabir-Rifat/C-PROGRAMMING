#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
        printf("The character is lowercase  letter");

    if(ch>=65&&ch<=91)
        printf(" The character is Uppercase letter ");

}
