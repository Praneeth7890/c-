#include<stdio.h>
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if (n%5==0&&n%11==0)
	{
		printf("it is divisible by both 5 and 11");
	}
	else
	{
		printf("it is not divisible by both 5 and 11");
	}
}
