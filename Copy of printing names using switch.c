#include<stdio.h>
main()
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("abhi");
			break;
	    case 2:
	    	printf("abhai");
	    	break;
	    case 3:
	    	printf("hemanth");
	    	break;
	    case 4:
	    	printf("avinash");
	    	break;
	    case 5:
	    	printf("manoj");
	    	break;
	    default:
	    	printf("the number doesnot matches");
	}
}
