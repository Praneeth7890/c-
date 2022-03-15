#include<stdio.h>
main()
{
	char alphabet;
	printf("enter a letter:");
	scanf("%c",&alphabet);
	if (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
	{
		printf("it is a vowel");
	}
	else
	{
		printf("it is a consonant");
	}
}
