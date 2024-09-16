/*QUE.9 : C Program to Check Uppercase or Lowercase or Digit or Special
Character*/
#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter the any key: = ");
	scanf(" %c",&ch);
	if(ch>='a' && ch <='z')
	{
	    printf("\n lower case");
	}
	else if(ch>='A'  && ch<='Z')
	{
	    printf("\n upper case");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n digits");
	}
	else
	{
		printf("\n special character");
	}
	return 0;	
}
