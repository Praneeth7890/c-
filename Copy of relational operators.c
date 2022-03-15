#include<stdio.h>
main()
{
	int a,b;
	printf("enter 2 no's");
	scanf("%d%d",&a,&b);
	if (a==b)
	{
	printf("yes");
	}
	if(a>b)
	{
	printf("\n a is greater than b");
	}
	if(a<b)
	{
	printf("\n b is greater than a");
	}
	if(a>=b)
	{
	printf("\n a>=b is true");
	}
	if(a<=b)
	{
	printf("\n a<=b is true");
	}
	if(a!=b)
	{
	printf("\n a is not equal to b");
}
}
