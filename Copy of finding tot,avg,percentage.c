#include<stdio.h>
main()
{
	int mat,phy,che,cse,vedc,tot,avg,percentage;
	printf("enter maths marks");
	scanf("%d",&mat);
	printf("enter physics marks");
	scanf("%d",&phy);
	printf("enter chemistry marks");
	scanf("%d",&che);
	printf("enter cse marks");
	scanf("%d",&cse);
	printf("enter vedc marks");
	scanf("%d",&vedc);
	tot=mat+phy+che+cse+vedc;
	printf("the total marks is:%d",tot);
	avg=tot/5;
	printf("the average marks is:%d",avg);
	percentage=(tot/500)*100;
	printf("the percentage of total marks is:%d",percentage);
}
