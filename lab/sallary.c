#include<stdio.h>
int main()
{
 float basicsalary,hra,da,gross_salary;
 printf("Enter your basic salary: ");
 scanf("%f",&basicsalary);
 if(basicsalary<=10000)
 {
     hra = basicsalary*0.2;
     da = basicsalary*0.8;
     gross_salary=basicsalary+hra+da ;
     printf("Gross salary = %.2f",gross_salary);
 }
 if(basicsalary<=20000)
 {
     hra = basicsalary*0.25;
     da = basicsalary*0.9;
     gross_salary=basicsalary+hra+da ;
     printf("Gross salary = %.2f",gross_salary);
 }
 if(basicsalary>20000)
 {
     hra = basicsalary*0.3;
     da = basicsalary*0.95;
     gross_salary=basicsalary+hra+da ;
     printf("Gross salary = %.2f",gross_salary);
 }
}
