#include<stdio.h>
main()
{
	int p,r,t,si;
	printf("enter the amount p");
	scanf("%d",&p);
	printf("enter the rate of interest");
	scanf("%d",&r);
	printf("enter the time t");
	scanf("%d",&t);
	si=(p*t*r)/100;
	printf("simpleinterest is:%d",si);
}
