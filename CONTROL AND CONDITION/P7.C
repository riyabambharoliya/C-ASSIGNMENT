//QUE.7 : Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	float marks;
	printf("\n enter the marks: = ");
	scanf("%f",&marks);
	if(marks<35)
	{
		printf("\n user is fail");
	}
	else
	{
		printf("\n user is pass");
	}
	return 0;
}
