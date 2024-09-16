//QUE30: WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	float day,year,copy;
	printf("\n enter the days: = ");
	scanf("%f",&day);
	printf("\n enter the year: = ");
	scanf("%f",&year);
	copy=year;
	year=day/365;
	printf("\n %f day is equal to %.2f year ",day,year);
	day=copy*365;
	printf("\n %f years is equal to %.2f days ",copy,day);
	return 0;
}
