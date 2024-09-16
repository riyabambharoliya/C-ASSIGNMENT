//QUE.6 : WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main()
{
	int term,num1=0,num2=1,num3,i;
	printf("\n enter the number of term : ");
	scanf("%d",&term);
	printf("fibonacci series =%d\t%d\t ",num1,num2);
	for(i=1;i<=term-2;i++)
	{
		num3=num1+num2;
		printf("%d\t",num3);
	    num1=num2;
	    num2=num3;
	}
	return 0;
}

