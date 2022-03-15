#include<stdio.h>
main()
{
	int l,b,a,p;
	printf("input length and breath of rectangle");
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("are of rectangle:%d",a);
	printf("perimeter of rectangle:\n%d",p);
}
