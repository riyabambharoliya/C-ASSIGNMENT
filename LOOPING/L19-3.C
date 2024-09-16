/* QUE.19-3
        * 
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *   
*/
#include<stdio.h>
int main()
{
	int i,j,k,col;
	printf("\nenter the value of col: ");
	scanf("%d",&col);
	for(i=1;i<=col;i++)
	{
		if(i%2!=0)
		{
			for(j=col;j>i;j--)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}

