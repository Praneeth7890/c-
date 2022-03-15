#include<stdio.h>
main()
{
	int n;
	printf("enter a year");
	scanf("%d",&n);
	if(n%400==0||(n%4==0&&n%100!=0))
	{
	printf("it is leap year");
    }
    else 
    {
    	printf("it is not a leap year");
	}

}
