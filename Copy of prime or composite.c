#include<stdio.h>
main()
{
	int n;
	printf("enter the no:");
	scanf("%d",&n);
	if (n==2||n==3||n==5||n==7)
	{
		printf("it is prime");
	}
	else if (n%2==0||n%3==0||n%5==0||n%7==0)
	{
		printf("it is a composite");
	}
	else
	{
		printf("it is prime");
	}
}
