//QUE29.Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
    float minute,second,hour;
	printf("\n enter the minute: = ");
	scanf("%f",&minute);
	second=minute*60;
	hour=minute/60;
	printf("\n second: %.2f",second);
	printf("\n hours: %.2f",hour);
	return 0;
}
