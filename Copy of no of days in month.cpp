#include<stdio.h>
main()
{
	int month;
	printf("enter a number of a month");
	scanf("%d",&month);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		printf("the no of days in this month is 31");
	}
	else if (month==2)
	{
		printf("the no of days in this month is 28");
	}
	else if (month==4||month==6||month==9||month==11)
	{
		printf("the nof of days in this month is 30");
	}
	else
	{
		printf("the month with this number doesnot exists");
	}
}
