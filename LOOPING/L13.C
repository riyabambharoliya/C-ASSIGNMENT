//QUE.13 : calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
	printf("\n enter the number:= ");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("\n factorial of %d is %d : ",num,fact);
	return 0;  
}
  
