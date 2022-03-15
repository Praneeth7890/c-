#include<stdio.h>
main()
{
	int a,b,sum,sub,mul,div,mdiv;
	printf("enter the 2 no's a,b");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("the sum is:%d\n",sum);
	sub=a-b;
	printf("the sub is:%d\n",sub);
	mul=a*b;
	printf("the product is:%d\n",mul);
	div=a/b;
	printf("the division is:%d\n",div);
	mdiv=a%b;
	printf("the modular divison is:%d",mdiv);
}
