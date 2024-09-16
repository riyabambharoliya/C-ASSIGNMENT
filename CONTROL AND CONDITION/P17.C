/*QUE.17 : Write a C program to check whether a triangle can be formed with the given
values for the angles.*/
#include<stdio.h>
int main()
{
	float a,b,c,tringle;
	printf("\n enter the value of angle a : = ");
	scanf("%f",&a);
	printf("\n enter the value of angle b : = ");
	scanf("%f",&b);
	printf("\n enter the value of angle c : = ");
	scanf("%f",&c);
	tringle=a+b+c;
	if(tringle==180)
	{
		printf("\n the given angles is triangle ");
	}
	else
	{
		printf("\n not triangle ");
	}
	return 0;
}
