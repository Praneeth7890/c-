#include<stdio.h>
main()
{
	int a,b,c,*p1,*p2,*p3;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	p3=&c;
	c=a+b;
	printf("storage name of c is %d\t\n",p3);
	printf("the sum is %d",*p3);
}
