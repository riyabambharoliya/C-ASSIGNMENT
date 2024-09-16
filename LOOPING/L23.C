//QUE.23- C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main()
{
	int i,num,rem,rev=0;
	printf("enter the number: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
	    rem=num%10;
		rev=rev*10+rem;
		num=num/10;	
	}
	printf("revers number %d",rev);
	return 0;
}
