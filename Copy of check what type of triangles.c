#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter lenght of sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b,b==c)
	{
		printf("it is equilateral triangle");
	}
	else if (a==b||b==c||c==a)
	{
		printf("it is isoceles triangle");
	}
	else
	{
		printf("it is scalene triangle");
	}
}
