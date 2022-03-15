#include<stdio.h>
main()
{
	char i,j;
	int n;
	printf("enter no of rows n");
	scanf("%d",&n);
	for(i=n;i>=97;i--)
	{
		for(j=97;j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
