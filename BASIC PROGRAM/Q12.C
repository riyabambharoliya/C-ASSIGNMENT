//QUE.12 accept no of stud of user.i need to gives 5 apple to each stud. how many apple are required. 
#include<stdio.h>
int main()
{
	int stud,apple=5,total;
	printf("\n enter the student: ");
	scanf("%d",&stud);
	total=stud*apple;
	printf("\n the total number of apple: %d",total);
	return 0;
}
