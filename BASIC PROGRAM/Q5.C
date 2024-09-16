//QUE5: area of cube formula:(a=6*a*a)
#include<stdio.h>
int main()
{
	float area;
	printf("\n enter the area: ");
	scanf("%f",&area);
	area=area*area*6;
	printf("\n the area of cube: %.3f",area);
	return 0;
}
