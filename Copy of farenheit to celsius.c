#include<stdio.h>
main()
{
	float c,g;
	printf("enter farenheit temperature:");
	scanf("%f",&g);
	c=((g-32)*(0.55));
	printf("the celsius temperature is:%f",c);
}
