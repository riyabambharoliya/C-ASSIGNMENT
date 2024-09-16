//QUE25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main()
{
	float exp1,exp2,exp3,exp4,exp5,average;
	printf("\nenter the 1st expence of user: = ");
	scanf("%f",&exp1);
	printf("\nenter the 2nd expence of user: = ");
	scanf("%f",&exp2);
	printf("\nenter the 3rd expence of user: = ");
	scanf("%f",&exp3);
	printf("\nenter the 4th expence of user: = ");
	scanf("%f",&exp4);
	printf("\nenter the 5th expence of user: = ");
	scanf("%f",&exp5);
	average=(exp1+exp2+exp3+exp4+exp5)/5;
	printf("\neverage of total expence: %f",average);
}							
