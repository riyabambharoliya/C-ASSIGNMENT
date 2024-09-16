//QUE32.Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main()
{
	int num1,num2,sum,count=0;
	printf("\n enter the first number: ");
	scanf("%d",&num1);
	printf("\n enter the secound number: ");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("\n sum of two number: %d",sum);
	printf("\n check its size: %d",sizeof(num1+num2));
	
	
	return 0;
}

