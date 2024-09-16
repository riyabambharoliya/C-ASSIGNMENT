//QUE.24 : 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf(" %d ",i);
		sum=sum+i;

	}
    printf("sum of number is %d ",sum);
	return 0;
}


