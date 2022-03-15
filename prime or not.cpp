#include<stdio.h>
main()
{
	int c,n,count;
	printf("enter a number");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		if(n%c==0)
		{
			printf("%d",c);
		}
	
	}
}
