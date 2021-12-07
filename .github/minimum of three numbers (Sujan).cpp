#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a<b)
	{
		printf("a is minimum");
	}
	else if(b<c)
	{
		printf("b is minimum");
	}
	else if(c<a)
	{
		printf("c is minimum");
	}
}
