//QUE.5 : Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
	float num;
	printf("\n enter the number: = ");
	scanf("%f",&num);
	if(num>0)
	{
		printf("\n the number is positive ");
	}
	else if(num==0)
	{
		printf("\n enter the positive or negative only");
	}
	else	
	{
		printf("\n the number is negative ");
	}
	return 0;
}
