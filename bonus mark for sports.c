
//if category is sports, then add bonus mark with marks

#include<stdio.h>
int main()
{
    int mark,marks,bonusMarks=10,category,sports=1;

    printf("Enter the marks:");
    scanf("%d",&mark);
    printf("\nwrite down the category in digit (sports(1)/General(0)):");
    scanf("%d",&category);

    if(category==sports)
    {
        marks=mark+bonusMarks;

    printf("\nTotal marks of the student is = %d",marks);
    }

    else

    printf("\ntotal marks of the student is = %d",mark);

    getch();



}
