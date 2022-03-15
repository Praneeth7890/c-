#include<stdio.h>
main()
{
	int a,b,addition,subtraction,multiplication,division,subdivision;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	addition=a+b;
	subtraction=a-b;
	multiplication=a*b;
	division=a/b;
	subdivision=a%b;
	printf("the addition is:%d",addition);
	printf("the subtraction is:%d",subtraction);
	printf("the multiplication is:%d",multiplication);
	printf("the division is:%d",division);
	printf("the subdivision is:%d",subdivision);
}
