#include<stdio.h>
main()
{
	int n,a,b,c,d,e;
	printf("enter a 3 digit number");
	scanf("%d",&n);
	a=n%10;
	b=n%100;
	c=b/10;
	d=n/100;
	e=a*100+c*10+d;
	if(e==n)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
}
