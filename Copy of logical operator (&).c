#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter 3 no's");
	scanf("%d%d%d",&a,&b,&c);
	d=((a>b)&&(c<15));
	printf("%d",d);
}
