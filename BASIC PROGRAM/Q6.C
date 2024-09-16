//QUE6.triangle of area triangle=base*1/2*height
#include<stdio.h>
int main()
{
    float base,height,area;
	printf("\n enter the base: ");
	scanf("%f",&base);
	printf("\n enter the height: ");
	scanf("%f",&height);
	area=base*1/2*height;
	printf("\n the area of tringle: %.2f",area);
	return 0;
}

