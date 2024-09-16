//QUE.3 : WAP to check if the given year is a leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("\n enter the year: = ");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("\n the year is leap year %d",year);
	}
	else
	 
	    if(year%100==0)
	{
		    printf("\n the year is not leap year %d",year);
	}
	    else if(year%4==0)
	{
		    printf("\n the year is leap year %d",year);
	}
	    else
	{
		    printf("\n the year is not leap year %d",year);
	}
	return 0;
}
