#include<stdio.h>
main()
{
	int n,i,s;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=i*i*i;
		printf("%d*%d*%d=%d\n",i,i,i,s);
	}
}
