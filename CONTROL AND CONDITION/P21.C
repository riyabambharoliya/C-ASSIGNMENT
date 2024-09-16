/* QUE.21 : Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include<stdio.h>
int main()
{
	float basicsalary,gross_salary,HRA,DA;
	printf("\n enter the salary of an employee: = ");
	scanf("%f",&basicsalary);
    gross_salary=basicsalary+HRA+DA;
    
    if(basicsalary<=10000)
    {
    	HRA=basicsalary*0.20;
    	DA=basicsalary*0.80;
    	gross_salary=basicsalary+HRA+DA;
    	printf("\n gross_salary= %.2f",gross_salary);
	}
    else if(basicsalary>10000 || basicsalary<=20000 )
    {  
        HRA=basicsalary*0.25;
        DA=basicsalary*0.90;
        gross_salary=basicsalary+HRA+DA;
		printf("\n gross_salary=%.2f ",gross_salary);
	}
	else
	{
		HRA=basicsalary*0.30;
		DA=basicsalary*0.95;
		gross_salary=basicsalary+HRA+DA;
		printf("\n gross_salary= %.2f ",gross_salary);
	}
	return 0;
}
	


