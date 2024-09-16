//QUE. 25 : (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	printf("sum of numbers are %d",sum);
	return 0;
}


