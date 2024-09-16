//QUE.14 : WAP to find the largest of three numbers.
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("\n enter the number: = ");
	scanf("%d",&num1);
	printf("\n enter the number: = ");
	scanf("%d",&num2);
	printf("\n enter the number: = ");
	scanf("%d",&num3);
	if((num1>num2) && (num1>num3))
	{ 
	    printf("\n %d is largest number ",num1);
	}
	else if((num2>num1) && (num2>num3))
	{
		printf("\n %d is largest nmber ",num2);
	}
	else
	{
		printf("\n %d is largest number ",num3);
	}
	return 0;	
}
