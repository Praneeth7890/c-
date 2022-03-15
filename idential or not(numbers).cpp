#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b||b==c||c==a)
	{
		printf("0");
	}
	else
	{
		printf("1");
	}
}
