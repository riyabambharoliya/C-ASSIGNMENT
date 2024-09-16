/*17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/

#include<stdio.h>
int main()
{
	int num,i=1;
	while(i<=5)
	{
		printf("\n enter the number %d: ",i);
	    scanf("%d",&num);
		if(num%2==0)
		{
			printf(" %d is even:",num);
		}
		else
		{
			printf(" %d is odd:",num);
		}
		i++;
	}
	return 0;
}

