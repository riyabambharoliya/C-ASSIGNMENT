/*QUE.8 : WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/
#include<stdio.h>
int main()
{
	float height;
	printf("\n enter the person height in cm : = ");
	scanf("%f",&height);
	if(height<150)
	{
		printf("\n person height is dwarf");
	}
	else if((height>=150) && (height<195))
	{
		printf("\n person height is average");
	}
	else 
	{
		printf("\n person height is taller ");
	}
	
	return 0;
}
