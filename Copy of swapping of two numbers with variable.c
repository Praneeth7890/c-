#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the 2 numbers after swapping is:");
	printf("%d\t%d",a,b);
}
