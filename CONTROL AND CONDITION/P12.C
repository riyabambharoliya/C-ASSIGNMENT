//QUE.12 WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("\n------HELLO PEOPLE-------");
	printf("\n enter the any three number:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	max=(num1>num2)?(num1>num3?num1:num3):(num2>num3? num2:num3);
	printf("\nmax number is %d",max);
	return 0;	
}

