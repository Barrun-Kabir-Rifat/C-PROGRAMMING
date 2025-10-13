
#include<stdio.h>
int main()
{
    int id, serial,a,b, department, semester, year;
    printf("Enter id:\n");
    scanf("%d",&id);
    serial = id%1000;
    a = id/1000;
    department = a%1000;
    b = a/100;
    semester = b%10;
    year = b/10;

    printf("admission year is 20%d:\n",year);
    {
        if(semester==1)
        printf("semester = spring\n");
        else if(semester==2)
        printf("semester = summer\n");
        else if("semester==3")
        print("semester = fall");

    }
    {


    if(department==3)

        printf("Department of Computer Science Engineering\n");
    else if(department==5)
        printf("Department of Civil Engineering\n");
    else if(department==6)
        printf("Department of Electrical and Electronics Engineering\n");
    else if(department==9)
        printf("Department of Agriculture\n");
    else if(department==1||department==2||department==4||department==7||department==8)
            printf("Department of xyz\n");
    }


    printf("serial no = %d",serial);

    return 0;


    }

