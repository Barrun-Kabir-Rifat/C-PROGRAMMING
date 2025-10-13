#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string:");
    scanf("%s",&str);
    int a =strlen(str);
    int i,vowel=0,flag=0;
    for(i=0;i<a;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {

            vowel++;
        }
         else{
                flag++;
         }
    }
    printf("The number of vowels in the string= %d\n",vowel);
    printf("The number of consonants in the string = %d",flag);


}
