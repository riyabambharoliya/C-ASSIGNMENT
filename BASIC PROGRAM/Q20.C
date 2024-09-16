//QUE20. .Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.
#include<stdio.h>
int main()
{
	float salary,remaining_salary,loan_installment,insurance_premium;
	printf("\nenter the monthly salary: = ");
	scanf("%f",&salary);
	loan_installment=salary*0.1 ;
	insurance_premium=salary*0.1;
	remaining_salary = salary - loan_installment-insurance_premium;
	printf("\nremaining salary after the deducting loan installment: %.2f",remaining_salary);
	return 0;
}
