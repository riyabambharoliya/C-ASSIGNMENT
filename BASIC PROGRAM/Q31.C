//QUE31. Convert kilometers into meters
#include<stdio.h>
int main()
{
	float kilometers,meters;
	printf("\n enter the value of kilometers: = ");
	scanf("%f",&kilometers);
	meters=kilometers*1000;
	printf("\n %.2f kilometers is equal to: %.2f",kilometers,meters);
	return 0;      
} 
