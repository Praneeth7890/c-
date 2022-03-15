#include<stdio.h>
main()
{
	int a,b,c,i,n;
	printf("enter the number");
	scanf("%d",&n);
	a=0;
	b=1;
	{
		printf("%d\t%d",a,b);
	}
	for(i=1;i<n-1;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
}
