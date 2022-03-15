#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);
	c=a&b;
	d=a|b;
	printf("c=a&b:%d",c);
	printf("\n d=a|b:%d",d);
}
