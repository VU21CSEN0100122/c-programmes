#include<stdio.h>
int main ()
{
	float temp;
	printf("Temperature in celsius is");
	scanf("%f",&temp);
	if (temp<0)
	{
		printf("freezing temperature");
	}
		else if (temp>=0&&temp<=10)
	{
		printf("very cold weather");
	}
	    else if (temp>=10&&temp<=20)
	{
		printf("cold weather");
	}
	    else if (temp>=20&&temp<=30)
	{
		printf("normal temperature");
	}
	    else if (temp>=30&&temp<=40)
	{
		printf("it is hot");
	}
	    else 
	{
		printf("it is very hot");
	}
}
