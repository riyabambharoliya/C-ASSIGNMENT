//QUE28.Convert years into days and months
#include<stdio.h>
int main()
{
	float year,days,month;
	printf("\n enter the year: = ");
	scanf("%f",&year);
	days = year*365;
	month = year*12;
	printf("\n days: %.2f",days);
	printf("\n month: %.2f",month);	
	return 0;
}

