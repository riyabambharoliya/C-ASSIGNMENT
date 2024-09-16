//QUE10. area of rectegular prism formula: A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	float A,w,l,h;
	printf("\n enter the value of w: ");
	scanf("%f",&w);
	printf("\n enter the value of l: ");
	scanf("%f",&l);
	printf("\n enter the value of h: ");
	scanf("%f",&h);
	A=2*((w*l)+(h*l)+(h*w));
	printf("\n the area of rectengular prism: %f",A);
	return 0;
}
