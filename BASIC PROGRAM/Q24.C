//QUE24.Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	int salary1,salary2,salary3,salary4,salary5,totalsalary,average;
	char name1,name2,name3,name4,name5;
	printf("\nenter the first employe name: = ");
	scanf(" %c",&name1);
	printf("\nenter the second employe name: = ");
	scanf(" %c",&name2);
	printf("\nenter the third employe name: = ");
	scanf(" %c",&name3);
	printf("\nenter the fourth employe name: = ");
	scanf(" %c",&name4);
	printf("\nenter the fifth employe name: = ");
	scanf(" %c",&name5);
	printf("\nenter the first employe salary: = ");
	scanf("%d",&salary1);
	printf("\nenter the second employe salary: = ");
	scanf("%d",&salary2);
	printf("\nenter the third employe salary: = ");
	scanf("%d",&salary3);
	printf("\nenter the fourth employe salary: = ");
	scanf("%d",&salary4);
	printf("\nenter the fifth employe salary: = ");
	scanf("%d",&salary5);
	totalsalary=salary1+salary2+salary3+salary4+salary5;
	average=totalsalary/5;
	printf("\nthe total salary of employee is: %d",totalsalary);
	printf("\naverage of employee salary: %d",average);
	return 0;
}
