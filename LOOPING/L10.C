/*QUE.10 : Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/
#include<stdio.h>
int main()
{
	int num,lastdigit=0,firstdigit=0,rem,sum=0,temp;
	printf("\n enter the number : ");
	scanf("%d",&num);
	temp=num;
	
	lastdigit=num%10;	
	while(num>109)
	{
	    num=num/10;
	}
	firstdigit=num;
	sum=firstdigit+lastdigit;
	printf("\n sum of first and last digit is %d",sum);
	return 0;
}

