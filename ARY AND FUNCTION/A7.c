//QUE.7 : WAP Find out length of string without using inbuilt function
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],i,length=0;
	printf("Enter the string = ");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	printf("\nString = %s",str);
	printf("\nLength = %d",length);
	
	return 0;
}
