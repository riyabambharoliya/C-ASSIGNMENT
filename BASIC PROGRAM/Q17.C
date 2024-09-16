//QUE.17 :Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
	float salary,insurencepremium,insurencepercentage;
	float insurancepercentage=0.20;
	printf("\n enter the salary: = ");
	scanf("%f",&salary);
	insurencepremium=salary*insurencepercentage;
	printf("\ninsurencepsremium: %.2f\n",insurencepremium);
	return 0; 
}


