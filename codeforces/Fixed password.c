#include<stdio.h>
int main()
{
    int password;
    while(1)
    {
        scanf("%d",&password);
        if(password!=1999)
        {
            printf("Wrong\n");
        }
        if(password==1999)
        {

            printf("Correct\n");
        return 0;
        }
    }
}

