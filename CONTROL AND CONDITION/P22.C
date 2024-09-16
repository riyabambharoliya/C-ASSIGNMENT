//QUE.22 : WAP to input the week number and print week day
#include<stdio.h>
int main()
{
	int weekNumber;
	printf("\n enter the weeknumber(1-7): ");
	scanf("%d",&weekNumber);
	if(weekNumber==1)
	{
		printf("Monday");
	}
	else if(weekNumber==2)
	{
		printf("Thursday");
	}
	else if(weekNumber==3)
	{
		printf("Wednsday");
	}
	else if(weekNumber==4)
	{ 
		printf("Thursday");
	}
	else if(weekNumber==5)
	{
		printf("Friday");
	}
	else if(weekNumber==6)
	{
		printf("saturday");
	}
	else if(weekNumber==7)
	{
		printf("sunday");
	}
	else
	{
		printf("invald number");
	}
	return 0;
}
