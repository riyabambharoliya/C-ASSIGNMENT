#include<stdio.h>
int main()
{
	float salary,monthlysalary,annualsalary;
	printf("\nenter the monthlysalary:  ");
	scanf("%f",&monthlysalary);
	annualsalary=(monthlysalary)*12;
	printf("\nenter the annualsalary: %.2f",annualsalary);
	return 0;
}


