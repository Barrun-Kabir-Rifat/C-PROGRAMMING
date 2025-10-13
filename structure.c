#include<stdio.h>
struct person
{
    char name[30];
    int age;
    float salary;
} ;
int main()
{
    struct person person1,person2;
    printf("Enter the name of person 1:");
    scanf("%s",&person1.name);
    printf("Enter the age of person 1:");
    scanf("%d",&person1.age);
    printf("Enter the salary of person 1:");
    scanf("%f",&person1.salary);

    printf("Enter the name of person 2:");
    scanf("%s",&person2.name);
    printf("Enter the age of person 2:");
    scanf("%d",&person2.age);
    printf("Enter the salary of person 2:");
    scanf("%f",&person2.salary);

    printf("\nPerson 1:\n\n");
    printf("Name : %s\n",person1.name);
    printf("Age : %d\n",person1.age);
    printf("Salary : %f\n",person1.salary);

  printf("\nPerson 2:\n\n");
    printf("Name : %s\n",person2.name);
    printf("Age : %d\n",person2.age);
    printf("Salary : %f",person2.salary);

}
