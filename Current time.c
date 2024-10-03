#include<stdio.h>
int main()
{
    time_t current;
    time(&current);
    printf("\nCurrent date: %s",ctime(&current));
    getch();
}
