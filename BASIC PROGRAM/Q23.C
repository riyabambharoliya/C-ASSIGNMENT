//QUE.23: WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
	int A,B;
	printf("\n enter the value of before swapping A: = ");
	scanf("%d",&A);
	printf("\n enter the value of before swapping B: = ");
	scanf("%d",&B);
	
	A=A*B;
	B=A/B;
	A=A/B;
	printf("\n the value of A after swapping = %d",A);
	printf("\n the value of B after swapping = %d",B);
	return 0;
}
