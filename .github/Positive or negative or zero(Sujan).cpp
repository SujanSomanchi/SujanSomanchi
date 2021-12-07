#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("positive number");
	}
	if(a<0)
	{
		printf("negative number");
	}
	if(a==0)
	{
		printf("neither positive nor negative");
	}
}

