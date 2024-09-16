//QUE.10 : WAP to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
	int num;
	printf("\n enter the number: = ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("\n the number is positive");
	}
	else if(num==0)
	{
		printf("\n the number is 0");
	}
	else
	{ 
	    printf("\n the number is negative");
	}
	return 0;
}
