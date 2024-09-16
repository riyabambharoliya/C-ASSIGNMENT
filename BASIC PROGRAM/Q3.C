//QUE3.find area and circumference if circle:
#include<stdio.h>
#define pi 3.14159
int main()
{
	float radius,circumference,area;
	printf("\n enter the radius of circle: ");
	scanf("%f",&radius);
	area=pi*radius*radius;
	circumference=2*pi*radius;
	printf("\n the area of circle: %.2f",area);
	printf("\n the circumference of circle: %.2f",circumference);
	return 0; 
}
