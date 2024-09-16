/*QUE.16 : Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
int main()
{
	int temp;
	printf("\n enter the temperature: = ");
	scanf("%d",&temp);
	if(temp<0)
	{
	    printf("\n freezing weather ");
	}
	else if(0<=temp && temp<10)
	{
		printf("\n very cold weather ");
	} 
	else if(10<=temp && temp<20)
	{
		printf("\n cold weather ");
	}
	else if(20<=temp && temp<30)
	{
		printf("\n normal in temp ");
	}
	else if(30<=temp && temp<40)
	{
		printf("\n its hot ");
	}
	else
	{
		printf("\n its very hot ");
	}
	return 0;
}


