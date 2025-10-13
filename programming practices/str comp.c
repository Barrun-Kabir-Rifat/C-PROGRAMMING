#include<stdio.h>
int main()
{
    char string1[30],string2[30],string3[30];
    printf("Enter string 1:");
    gets(string1);
    printf("Enter string 2:");
    gets(string2);
    printf("Enter string 3:");
    gets(string3);

   int d= strcmp(string1,string2);
   int l=strlen(string1);
   strcpy(string3,string1);
    strcat(string1,string2);
   printf("The length of string 1 = %d\n",l);
   if(d==0)
    printf("The string1 and string 2 are equal\n");
    else
        printf("The string1 and string2 are not equal\n");
    printf("Ater copying string3 from string 1,string 3 =%s\n",string3);
    printf("The addition of str1 and str2 =%s",string1);

getch();




}
