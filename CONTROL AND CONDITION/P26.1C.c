//QUE.26: WAP to show
//i. Monday to Sunday using switch case
#include<stdio.h>
int main()
{
	int num;
	printf("\n enter the value: = ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("Monday");
		break;
		
		case 2:
		
			printf("Tuesday");
		break;
		
		case 3:
		
			printf("Wednsday");
		break;
		
		case 4:
		
			printf("thursday");
		break;
		
		case 5:
		
			printf("friday");
		break;
		
		case 6:
		
			printf("saturday");
		break;
		
		case 7:
	
			printf("sunday");
			break;
		default:
			printf("Invalid Month.");
	}
		return 0;

}

