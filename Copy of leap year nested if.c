#include<stdio.h>
main()
{
	int n;
	printf("enter a year");
	scanf("%d",&n);
	if(n%4==0)
	{
	     if(n%100!=0&&n%400==0)
	    {
		    printf("it is leap year");
	    }
    	else
	    {
		    printf("it is not leap year");
	    }
    }
    else 
    {
    	printf("it is not a leap year");
	}
}
