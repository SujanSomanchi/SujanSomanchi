#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a==366)
	{
		printf("it is a leap year");
	}
	if(a==365)
	{
		printf("it is a normal year");
	}
	if(a!=366&&a!=365)
	{
		printf("invalid");
	}
}
