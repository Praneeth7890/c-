#include<stdio.h>
main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if (marks>90)
	{
		printf("the grade is A");
	}
	else if (marks>80&&marks<90)
	{
		printf("the grade is B");
	}
	else if (marks>70&&marks<80)
	{
		printf("the grade is C");
	}
	else if (marks>60&&marks<70)
	{
		printf("the grade is D");
	}
	else if (marks>50&&marks<60)
	{
		printf("the grade is E");
	}
	else
	{
		printf("fail");
	}
}
