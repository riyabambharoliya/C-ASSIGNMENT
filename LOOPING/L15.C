//QUE.15 : Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main()
{
	int num,i=1,sum=0;
	while(i<=10)
	{
		printf("\n enter the number %d: ",i);
		scanf("%d",&num);
		sum=sum+num;
		i++;

	}
	printf("sum of 10 numbers is %d ",sum);
	return 0;
	
	
}
