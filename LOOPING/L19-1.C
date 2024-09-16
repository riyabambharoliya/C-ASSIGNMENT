//QUE.19-1: petterns: 
/*1
  1 0
  1 0 1 
  1 0 1 0 
  1 0 1 0 1
  */
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("\n enter the number of row: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");	
	}
	return 0;
} 
