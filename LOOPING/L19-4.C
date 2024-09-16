//QUE.19-4 
/* *
   * *
   * * * 
   * * * * 
   * * * * * 
   * * * * * *
   * * * * *
   * * * *
   * * *
   * * 
   * 
*/
#include<stdio.h>
#include<stdio.h>
	int main()
	{
		int row,j,i;
		printf("\n enter the row: ");
		scanf("%d",&row);
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for(i=row-1;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		return 0;
	}
	

