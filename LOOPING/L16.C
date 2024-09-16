//QUE.16 : Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
int main()
{
	int num,i=1,sum=0;
	printf("\n enter the natural number: =");
	scanf("%d",&num);
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of natural number upto %d is %d: ",num,sum);
	return 0;
}
