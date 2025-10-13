
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("\n");
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
    {
    if(ch=='a')
        printf("The character is vowel");
    else if(ch=='e')
        printf("The character is vowel");
    else if(ch=='i')
        printf("The character is vowel");
    else if(ch=='o')
        printf("The haracter is vowel");
    else if(ch=='u')
        printf("The character is vowel");
    else if(ch=='A')
        printf("The character is vowel");
    else if(ch=='E')
        printf("The character is vowel");
    else if(ch=='I')
        printf("The character is vowel");
    else if(ch=='O')
        printf("The character is vowel");
    else if(ch=='U')
        printf("The character is vowel");
    else
        printf("The character is Constant");
    }
    else
        printf("Character is invalid");
        getch();
}
