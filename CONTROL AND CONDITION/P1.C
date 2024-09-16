/*QU1.1 : Write a C program to accept two integers and check whether they are equal
or not*/

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\n enter first integer: ");
	scanf("%d",&num1);
	printf("\n enter second integer: ");
	scanf("%d",&num2);
	if(num1==num2)
	{
		printf("\n %d and %d are equal number",num1,num2);
	}
	else
	{
		printf("\n %d and %d are not equal number",num1,num2);
	}
	return 0;
}
