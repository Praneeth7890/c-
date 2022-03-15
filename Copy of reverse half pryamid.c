#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter no of rows n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
