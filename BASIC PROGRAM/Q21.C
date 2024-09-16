//QUE.21 Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable
//with using 3rd variable
/*#include<stdio.h>
int main()
{
	int a,b,riya;
	printf("\nvalue of a before swaping =");
	scanf("%d",&a);
	printf("\nvalue of b before swaping = ");
	scanf("%d",&b);
	riya = a;
	a=b;
	b=riya;
	printf("\nvalue of a after swaping = %d",a);
	printf("\nvalue of b after swaping = %d",b);
	return 0;
}*/

//without using 3rd variable
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

