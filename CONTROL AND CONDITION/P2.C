/*QUE.2 : Write a C program to read the value of an integer m and display the value of
m is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/

#include<stdio.h>
int main()
{
	int num;
	printf("\n enter the integer m : = ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("\n the number is zero: ",0);
	}
	else if(num>0)
	{
		printf("\n the value of an integer is  : %d",1);
	}
	else
	{
		printf("\n the value of an integer is : %d",-1);
	}
	return 0;
}
