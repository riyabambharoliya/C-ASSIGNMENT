//QUE.26 : (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main()
{
	int i,n,j,sum=0;
	printf("\n enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			sum=sum+j;
		}
	}
	printf("sum is %d",sum);
	return 0;
}
