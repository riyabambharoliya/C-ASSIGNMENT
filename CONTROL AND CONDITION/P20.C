/* QUE.20 : Write a program in C to read any Month Number in integer and display the
number of days for this month.*/

#include<stdio.h>
int main()
{
	int mon;
	printf("\n enter the number of days in month: = ");
	scanf("%d",&mon);
	if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12)
	{
	    printf("\n month has a 31 days");
	}
	else if(mon==4 || mon==6 || mon==9 || mon==11)
	{
	    printf("\n month has a 30 days");
	}
	else if(mon==2)
	{
		printf("\n month has a 28 days");
	}
	else
	{
		printf("\n invalis month number ");
	}
	return 0;	 	
} 
