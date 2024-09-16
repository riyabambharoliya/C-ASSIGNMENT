/*QUE.22 Accept 3 numbers from user using while loop and check each numbers
palindrome*/

#include<stdio.h>
int main()
{
	int i=1,num,rem,rev,copy;
	while(i<=3)
	{
		printf("\nenter the number %d: ",i);
		scanf("%d",&num);
        int copy=num;
        int rev=0;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	if(copy==rev)
	{
		printf("%d number is palindrom",copy);
	}
	else
	{
		printf("%d number is not palindrom",copy);
	}
	i++;
    }
	  
    return 0;
}
