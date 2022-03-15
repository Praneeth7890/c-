#include<stdio.h>
main()
{
	int p,r,n,t,a;
	printf("enter amount p");
	scanf("%d",&p);
	printf("enter rate r");
	scanf("%d",&r);
	printf("enter number of times the interest is compounded per  n");
	scanf("%d",&n);
	printf("enter time t");
	scanf("%d",&t);
	a=p*(1+(r/n))^(n*t);
	printf("%d",a);
}
