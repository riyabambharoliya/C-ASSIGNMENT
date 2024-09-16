//QUE.19 calculate compound interest:
#include<stdio.h>
#include<math.h>
int main()
{
	float A,p,r,t,n,power,Ans;
	printf("\nEnter the value of principle: = ");
	scanf("%f",&p);
	printf("\nenter the value of rate: = ");
	scanf("%f",&r);
	printf("\nenter the number of year: = ");
	scanf("%f",&t);
	printf("\nenter the number of times interest is componded per year: = ");
	scanf("%f",&n);
	A=p*(1+(r/n));
	power=(n*t);
	Ans=pow(A,power);
    printf("\ncompound interest: %.3f",Ans);
    return 0;
}
