//QUE.5 : WAP to print factorial of given number

#include<stdio.h>
int main()
{
	long int num,i,fact=1;
	printf("enter number:");
	scanf("%ld",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %ld is %ld",num,fact);
	return 0;
}
