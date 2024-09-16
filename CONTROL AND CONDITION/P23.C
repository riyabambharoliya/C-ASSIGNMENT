//QUE.23 : Accept month number and display month name
#include<stdio.h>
int main()
{
	int monthNumber;
	printf("\n enter the month number: = ");
	scanf("%d",&monthNumber);
	if(monthNumber==1)
	{
		printf("jan");
	}
	else if(monthNumber==2)
	{
		printf("feb");
	}
	else if(monthNumber==3)
	{
		printf("mar");
	}
	else if(monthNumber==4)
	{
		printf("apr");
	}
	else if(monthNumber==5)
	{
		printf("may");
	}
	else if(monthNumber==6)
	{
		printf("jun");
	}
	else if(monthNumber==7)
	{
		printf("july");
	}
	else if(monthNumber==8)
	{
		printf("aug");
	}
	else if(monthNumber==9)
	{
		printf("sep");
	}
	else if(monthNumber==10)
	{
		printf("oct");
	}
	else if(monthNumber==11)
	{
		printf("nov");
	}
	else if(monthNumber==12)
	{
		printf("dec");
	}
	else
	{
		printf("invalid number");
	}
	return 0;
}
