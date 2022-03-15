#include<stdio.h>
main()
{
	int a,b;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a is greatest:%d",a);
	}
	else
	{
		printf("b is greatest:%d",b);
	}
}
