#include<stdio.h>
main()
{
	char i,j;
	int n;
	printf("enter no of rows n");
	scanf("%d",&n);
	for(i=97;i<=n;i++)
	{
		for(j=97;j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
