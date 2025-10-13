#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",&str1,&str2);
    int i,l;
    strrev(str1);
    int a =strcmp(str1,str2);
    if(a==0)
        printf("YES");
     else
        printf("NO");
}
