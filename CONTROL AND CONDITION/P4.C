/*QUE.4 : WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/
#include<stdio.h>
int main()
{
	int num1,num2;
	char operation;
	printf("enter the operation(+,-,*,/,%%): ");
	scanf(" %c",&operation);
	printf("\n enter the number: = ");
	scanf("%d",&num1);
	printf("\n enter the number: = ");
	scanf("%d",&num2);
	if(operation=='+')
	{
		printf("%d+%d=%d",num1,num2,num1+num2);
	}
	else if(operation=='-')
	{
		printf("%d-%d=%d",num1,num2,num1-num2);
	}
	else if(operation=='*')
	{
		printf("%d*%d=%d",num1,num2,num1*num2);
	}
	else if(operation=='/')
	{
		printf("%d/%d=%d",num1,num2,num1/num2);
	}
	else if(operation=='%')
	{
		printf("%d",num1%num2);
	}
	else
	{
		printf("invalid operator");
	}
	
	return 0;
}
