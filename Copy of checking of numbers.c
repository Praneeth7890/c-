#include<stdio.h>
main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if (a==100)
	{
		printf("a=100");
	}
	else if(a==50)
	{
		printf("a=50");
	}
	else if(a==25)
	{
		printf("a=25");
	}
	else
	{
		printf("a is not equal to 100,50,25");
	}
}
