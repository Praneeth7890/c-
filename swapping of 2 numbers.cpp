#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the two numbers after swapping is;");
	printf("%d/t%d",a,b);
}
