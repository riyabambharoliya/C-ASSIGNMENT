//QUE26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("\nenter the fahrenheit: = ");
	scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("\ntemperature fahrenheit to celsius: %f",celsius);
    return 0;
}

