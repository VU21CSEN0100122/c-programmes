#include<stdio.h>
main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("triangle is valid");
	}
	else
	{
		printf("triangle is not valid");
	}
}
