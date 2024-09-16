//QUE.6 : Find the Character Is Vowel or Not
#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter the character: = ");
	scanf(" %c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
        printf("\n the character the vowel ");	
    } 
	else
	{
		printf("\n the character is not vowel ");
	}
	return 0;
}

