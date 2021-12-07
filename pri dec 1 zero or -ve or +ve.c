#include<stdio.h>
int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("a is positive");
	}
	else if(a<0)
	{
		printf("a is neagtive");
	}
	else
	{
		printf("a is zero");
	}
	return 0;
}
