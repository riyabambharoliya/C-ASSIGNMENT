//QUE.11 : WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()
{
	int n;
	printf("\n enter always your choice : ");
	scanf("%d",&n);
	(n%2==0)?printf("%d is even",n):printf("%d is odd",n);
	return 0;
}
