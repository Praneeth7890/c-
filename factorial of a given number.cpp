#include<stdio.h>
main()
{
	int i,n,s;
	printf("enter a number");
	scanf("%d",&n);
	s=1;
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("the factorial value is %d",s);
}
