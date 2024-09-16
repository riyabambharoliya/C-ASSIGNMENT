/*QUE22: Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – p*/
#include<stdio.h>
int main()
{
	float Amount,Interest,P,R,t;
	printf("\nenter the of value principle: =");
	scanf("%f",&P);
	printf("\nenter the value of rate: = ");
	scanf("%f",&R);
	printf("\nenter the value of time: = ");
	scanf("%f",&t);
	Amount=P*(1+R/100)*t;
	Interest = Amount - P;
	printf("\nenter the amount= %.2f",Amount);
	printf("\nenter the Interest= %.2f",Interest);

	return 0;
}
