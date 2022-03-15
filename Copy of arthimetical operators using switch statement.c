#include<stdio.h>
main()
{
	int n,a,b,sum,diff,mul,div,mod;
	printf("enter operation number");
	scanf("%d",&n);
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	switch (n)
	{
	case 1:
		sum=a+b;
		printf("sum is %d",sum);
		break;
	case 2:
		diff=a-b;
		printf("diff is %d",diff);
		break;
	case 3:
		mul=a*b;
		printf("mul is %d",mul);
		break;
	case 4 :
		div=a/b;
		printf("div is %d",div);
		break;
	case 5:
		mod=a%b;
		printf("mod is %d",mod);
		break;
	default : 
	printf("the operation doesnot exists");
    }
}
