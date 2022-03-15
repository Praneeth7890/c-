#include<stdio.h>
main()
{
	int i,n,s;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		s=i*n;
		printf("%d*%d=%d\n",n,i,s);
	}
}
